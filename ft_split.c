#include <stdlib.h>

static int		ft_recsplit(char **strs, char const *s, char c, int wordcount);
static size_t	ft_wordcount(char const *s, char c);
static size_t	ft_wordlength(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	wordcount;

	while (*s == c)
		s++;
	wordcount = ft_wordcount(s, c);
	strs = malloc((wordcount + 1) * sizeof(char **));
	if (!strs)
		return (0);
	if (ft_recsplit(strs, s, c, wordcount))
		return (0);
	return (strs);
}

static int	ft_recsplit(char **strs, char const *s, char c, int wordcount)
{
	int	wordlength;

	if (wordcount--)
	{
		wordlength = ft_wordlength(s, c);
		*strs = malloc(wordlength + 1);
		if (!strs)
			return (1);
		*(*strs + wordlength) = 0;
		while (wordlength--)
			*(*strs + wordlength) = *(s + wordlength);
		while (*s && *s != c)
			s++;
		while (*s == c)
			s++;
		if (wordcount)
			ft_recsplit(strs + 1, s, c, wordcount);
		else
			*(strs + 1) = 0;
		return (0);
	}
	return (1);
}

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		i++;
		while (*s == c)
			s++;
	}
	return (i);
}

static size_t	ft_wordlength(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) && *(s + i) != c)
		i++;
	return (i);
}
