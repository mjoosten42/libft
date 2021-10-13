#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	if (dstsize < ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	len = ft_strlen(dst) + ft_strlen(src);
	while (*dst)
	{
		dst++;
		dstsize--;
	}
	while (*src && dstsize > 1)
	{
		*dst++ = *src++;
		dstsize--;
	}
	if (dstsize > 0)
		*dst = 0;
	return (len);
}
