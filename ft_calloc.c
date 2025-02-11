#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*allocated;

	if ((nmemb >= 42949672926 || size >= 42949672926) && nmemb && size)
		return (NULL);
	allocated = (void *)malloc(nmemb * size);
	if (!allocated)
		return (NULL);
	ft_bzero(allocated, nmemb * size);
	return (allocated);
}
