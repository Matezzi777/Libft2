#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	car;

	if (n == INT_MIN)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-n, fd);
	}
	else if (0 <= n && n <= 9)
	{
		car = n + '0';
		write(fd, &car, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
