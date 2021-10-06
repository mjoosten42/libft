#include <stddef.h>

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *dst, const char *src, int dstsize)
{
	char	*start;
	int		len;

	len = ft_strlen(dst);
	start = dst;
	while (*dst)
	{
		dst++;
		dstsize--;
	}
	while (*src && --dstsize)
		*dst++ = *src++;
	*dst++ = 0;
	return (len);
}
