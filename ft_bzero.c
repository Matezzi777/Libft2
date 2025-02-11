#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*cursor;

	cursor = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		cursor[i] = '\0';
		i++;
	}
}
