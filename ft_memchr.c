#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*cursor;

	cursor = (unsigned char *)s;
	while (n--)
	{
		if (*cursor == (unsigned char)c)
			return ((void *)cursor);
		cursor++;
	}
	return (NULL);
}
