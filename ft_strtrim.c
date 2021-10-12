#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		len;

	while (ft_strchr((char *)set, *(char *)s1))
		s1++;
	len = ft_strlen(s1);
	if (!len)
		len = 1;
	while (ft_strchr((char *)set, *((char *)s1 + len - 1)))
		len--;
	str = malloc(len + 1);
	if (!str)
		return (0);
	ft_strlcpy(str, s1, len + 1);
	return (str);
}
