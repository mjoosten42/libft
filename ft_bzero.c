void	ft_bzero(char *str, int n)
{
	while (n--)
		*str++ = 0;
	return ;
}
