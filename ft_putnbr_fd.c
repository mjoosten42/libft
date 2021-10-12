#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n / 10)
		ft_putnbr_fd(n / 10, fd);
	if (n > 0)
		c = '0' + n % 10;
	else
		c = '0' - (n % 10);
	write(fd, &c, 1);
}
