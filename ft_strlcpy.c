#include <stddef.h>

size_t	ft_strlen(const char *str);

int	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	len;

	len = ft_strlen(src);
	while (*src && --dstsize)
		*dst++ = *src++;
	*dst = 0;
	return (len);
}
