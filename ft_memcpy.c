#include <stddef.h>
#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	char	*dest;

	dest = (char *)dst;
	if (!(dst || src))
		return (0);
	while (n--)
		*dest++ = *(char *)src++;
	return (dst);
}
