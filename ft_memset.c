#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*a;

	a = s;
	i = 0;
	while (i < n)
	{
		*a = c;
		a++;
		i++;
	}
	return (s);
}
