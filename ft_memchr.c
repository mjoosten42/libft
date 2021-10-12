#include <stddef.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(char *)s == c)
			return ((void *)s);
		s++;
	}
	return (0);
}
