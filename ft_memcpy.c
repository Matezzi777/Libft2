#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)src;
	b = dest;
	i = 0;
	while (i < n)
	{
		*b = *a;
		a++;
		b++;
		i++;
	}
	return (dest);
}
