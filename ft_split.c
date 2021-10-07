#include <stdlib.h>

static int	ft_recsplit(char **strs, char const *s, char c, int wordcount);
static int	ft_wordcount(char const *s, char c);
static int	ft_wordlength(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		wordcount;

	wordcount = ft_wordcount(s, c);
	strs = malloc((wordcount + 1) * sizeof(char **));
	if (!strs)
		return (0);
	if (ft_recsplit(strs, s, c, wordcount - 1))
		return (0);
	return (strs);
}

static int	ft_recsplit(char **strs, char const *s, char c, int wordcount)
{
	int	wordlength;

	wordlength = ft_wordlength(s, c);
	*strs = malloc(wordlength + 1);
	if (!strs)
		return (1);
	*(*strs + wordlength) = 0;
	while (wordlength--)
		*(*strs + wordlength) = *(s + wordlength);
	while (*s != c)
		s++;
	if (wordcount)
		ft_recsplit(strs + 1, s + 1, c, wordcount - 1);
	else
		*(strs + 1) = 0;
	return (0);
}

static int	ft_wordcount(char const *s, char c)
{
	int	i;

	i = 1;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i);
}

static int	ft_wordlength(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s && *s++ != c)
		i++;
	return (i);
}
