#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*ret;

	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	ret = str;
	*(str + len) = 0;
	while (start--)
	{
		if (!*s)
			return (ft_strdup(s));
		s++;
	}
	while (len-- && *s)
		*str++ = *s++;
	return (ret);
}
