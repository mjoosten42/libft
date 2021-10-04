char	*ft_strrchr(char *str, char c)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	while (i)
	{
		if (*(str + i) == c)
			return (str = str + i);
		i--;
	}
	return (0);
}
