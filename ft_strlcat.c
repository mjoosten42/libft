#include <stddef.h>

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *dst, const char *src, int dstsize)
{
	size_t	len;

	len = ft_strlen(dst) + ft_strlen(src);
	if (dstsize <= (int)(ft_strlen(dst)))
		return (len);
	while (*dst && dstsize - 1)
	{
		dst++;
		dstsize--;
	}
	while (*src && dstsize - 1)
	{
		*dst++ = *src++;
		dstsize--;
	}
	*dst = 0;
	return (len);
}
