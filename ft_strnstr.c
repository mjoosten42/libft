#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;

	if (!(*needle))
		return ((char *)haystack);
	while (*haystack && len--)
	{
		i = 0;
		while (*(haystack + i) == *(needle + i))
		{
			if (!(*(needle + i + 1)))
				return ((char *)haystack);
			if (i > (int)len)
				break ;
			i++;
		}
		haystack++;
	}
	return (0);
}
