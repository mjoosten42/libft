char	*ft_memchr(char *str, int c, int n)
{
	while (*str != c && n--)
		str++;
	if (*str || n)
		return (str);
	return (0);
}
