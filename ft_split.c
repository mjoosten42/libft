#include <stdlib.h>

static int	ft_wordcount(char const *s, char c);
static int	ft_wordlength(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;

	while (*s == c)
		s++;
	strs = malloc((ft_wordcount(s, c) + 1) * sizeof(char **));
	i = 0;
	while (*s)
	{
		*(strs + i) = malloc(ft_wordlength(s, c) + 1);
		j = 0;
		while (*s && *s != c)
			*(*(strs + i) + j++) = *s++;
		*(*(strs + i) + j) = 0;
		while (*s == c)
			s++;
		i++;
	}
	*(strs + i) = 0;
	return (strs);
}

static int	ft_wordcount(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		while (*s == c)
			s++;
		i++;
	}
	return (i);
}

static int	ft_wordlength(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}
