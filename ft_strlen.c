#include <stddef.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	char	*start;

	start = (char *)s;
	while (*s)
		s++;
	return (start - s);
}
