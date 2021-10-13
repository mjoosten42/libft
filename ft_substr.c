#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*ret;

	if (!s)
		return (0);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	*(str + len) = 0;
	while (start--)
	{
		if (!*s)
		{
			*str = 0;
			return (str);
		}
		s++;
	}
	ret = str;
	while (len-- && *s)
		*str++ = *s++;
	return (ret);
}
