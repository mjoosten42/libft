#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;

	str = (char *)b;
	while (len--)
		*str++ = (unsigned char)c;
	return (b);
}
