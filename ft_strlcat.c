#include <stddef.h>

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *dst, const char *src, int dstsize)
{
	size_t	len;

	len = ft_strlen(dst) + ft_strlen(src);
	while (*dst)
	{
		dst++;
		dstsize--;
	}
	while (*src && dstsize - 1 > 0)
	{
		*dst++ = *src++;
		dstsize--;
	}
	if (dstsize > 0)
		*dst = 0;
	return (len);
}
