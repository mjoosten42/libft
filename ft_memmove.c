#include <stddef.h>
#include "libft.h"

static int	ft_strOverlap(char *dst, char*src, size_t len);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;

	dest = (char *)dst;
	source = (char *)src;
	if (!(dst || src))
		return (0);
	if (ft_strOverlap(dest, source, len))
		while (len--)
			*(dest + len) = *(source + len);
	else
		while (len--)
			*dest++ = *source++;
	return (dst);
}

static int	ft_strOverlap(char *dst, char *src, size_t len)
{
	while (len--)
	{
		if (dst == src)
			return (1);
		src++;
	}
	return (0);
}
