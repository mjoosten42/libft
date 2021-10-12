#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	while (i >= 0)
	{
		if (*(str + i) == c)
			return (str = str + i);
		i--;
	}
	return (0);
}
