#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int	i;

	if (!(*needle))
		return ((char *)haystack);
	while (*haystack && n--)
	{
		i = 0;
		while (*(haystack + i) == *(needle + i))
		{
			i++;
			if (!(*(needle + i)))
				return ((char *)haystack);
		}
		haystack++;
	}
	return (0);
}