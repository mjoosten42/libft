#include <stddef.h>

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	char	*dest;

	dest = (char *)dst;
	while (n--)
		*dest++ = *(char *)src++;
	return (dst);
}
