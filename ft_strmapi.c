#include <stdlib.h>

size_t	ft_strlen(const char *str);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (0);
	i = 0;
	while (*s)
	{
		*(str + i) = f(i, *s);
		i++;
	}
	return (str);
}
