#include <stdlib.h>

static void	ft_recItoa(int n, char *str);

char	*ft_itoa(int n)
{
	char	*str;
	int		min;
	int		m;
	int		i;

	min = 0;
	if (n == -2147483648)
		return (str = "-2147483648");
	if (n < 0 && ++min)
		n = -n;
	m = n;
	i = 0;
	while (m >= 10 && ++i)
		m /= 10;
	str = malloc(i + min + 1);
	if (!str)
		return (0);
	if (min)
		*str = '-';
	ft_recItoa(n, str + i + min);
	return (str);
}

static void	ft_recItoa(int n, char *str)
{
	if (n >= 10)
		ft_recItoa(n / 10, str - 1);
	*str = '0' + n % 10;
}
