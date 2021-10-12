#include <stddef.h>
#include "libft.h"

static int	ft_strOverlap(void *dst, const void *src);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;

	dest = (char *)dst;
	source = (char *)src;
	if (ft_strOverlap(dst, src))
		while (len--)
			*(dest + len) = *(source + len);
	else
		while (len--)
			*dest++ = *source++;
	return (dst);
}

static int	ft_strOverlap(void *dst, const void *src)
{
	while (*(char *)src)
	{
		if (dst == src)
			return (1);
		src++;
	}
	return (0);
}
