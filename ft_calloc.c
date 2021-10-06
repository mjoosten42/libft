#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	int		len;
	void	*ret;

	len = count * size;
	ret = malloc(len);
	while (len--)
		*((char *)ret + len) = 0;
	return (ret);
}
