#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;

	s2 = (unsigned char *)s;
	while (i < n)
	{
		if (*s2 == c)
			return (s2);
		s2++;
	}
	return (NULL);
}
