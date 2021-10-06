static int	ft_isspace(char c);
static int	ft_isdigit(int c);

int	ft_atoi(const char *str)
{
	int		result;
	int		min;

	str = (char *)str;
	result = 0;
	min = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			min++;
		str++;
	}
	while (ft_isdigit(*str))
		result = 10 * result + *str++ - '0';
	if (min && result != -2147483648)
		result = -result;
	return (result);
}

static int	ft_isspace(char c)
{
	if (c == '\t')
		return (1);
	if (c == '\n')
		return (1);
	if (c == '\v')
		return (1);
	if (c == '\f')
		return (1);
	if (c == '\r')
		return (1);
	if (c == ' ')
		return (1);
	return (0);
}

static int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
