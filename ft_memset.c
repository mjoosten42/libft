void	*ft_memset(void *b, int c, int len)
{
	void *start;

	start = b;
	while (len--)
		*(char *)b++ = (unsigned char) c;
	return (start);
}
