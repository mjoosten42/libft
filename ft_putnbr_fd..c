#include <unistd.h>

char	*ft_itoa(int n);

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = ft_itoa(n);
	while (*s)
		write(fd, s++, 1);
}
