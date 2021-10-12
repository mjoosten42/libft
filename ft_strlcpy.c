#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	len;

	len = ft_strlen(src);
	if (!dstsize)
		return (len);
	while (*src && --dstsize)
		*dst++ = *src++;
	*dst = 0;
	return (len);
}
