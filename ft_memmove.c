#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void		*d;

	if ((!dest && !src) || (dest == src))
		return (dest);
	d = dest;
	if (dest > src)
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	else
		while (n--)
			*(char *)dest++ = *(char *)src++;
	return (d);
}
