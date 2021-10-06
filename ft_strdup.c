#include <stdlib.h>

size_t	ft_strlen(const char *str);

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		len;

	len = ft_strlen(s1) + 1;
	s2 = malloc(len);
	while (len--)
		*(s2 + len) = *(s1 + len);
	return (s2);
}