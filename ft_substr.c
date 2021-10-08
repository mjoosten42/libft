#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str);

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
			return ((char *)s);
		s++;
	}
	while (len-- && *s)
		*str++ = *s++;
	return (ret);
}
