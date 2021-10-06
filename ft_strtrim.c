#include <stdlib.h>
#include <stddef.h>

char	*ft_strchr(char *str, int c);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		len;

	while (ft_strchr((char *)set, *(char *)s1))
		s1++;
	len = ft_strlen(s1);
	while (ft_strchr((char *)set, *((char *)s1 + len)))
		len--;
	str = malloc(len + 1);
	if (!str)
		return (0);
	ft_strlcpy(str, s1, len);
	return (str);
}
