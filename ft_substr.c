#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			sub_len;
	char			*sub;

	sub_len = ft_strlen(s);
	if (sub_len - start < len)
		sub_len = sub_len - start;
	else
		sub_len = len;
	sub = (char *)malloc((sub_len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < sub_len)
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub);
}
