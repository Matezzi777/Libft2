#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!little || little[0] == '\0')
		return ((char *)big);
	if (len < 1)
		return (NULL);
	i = 0;
	while (big[i] && i < ft_strlen(big) - len)
	{
		j = 0;
		while (big[i + j] && big[i + j] == little[j])
			j++;
		if (j == len)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
