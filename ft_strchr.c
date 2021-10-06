char	*ft_strchr(char *str, int c)
{
	while (*str != c && *str)
		str++;
	if (*str)
		return (str);
	return (0);
}
