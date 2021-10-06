#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*ret;

	str = malloc(len + 1);
	ret = str;
	*(str + len) = 0;
	while (start--)
	{
		if (!*s)
			return (0);
		s++;
	}
	while (len-- && *s)
		*str++ = *s++;
	return (ret);
}
