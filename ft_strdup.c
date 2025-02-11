#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	i;
	int				len;
	char			*duplicate;

	len = ft_strlen(s);
	duplicate = (char *)malloc((len + 1) * sizeof(char));
	if (!duplicate)
		return (NULL);
	i = 0;
	while (s[i])
	{
		duplicate[i] = s[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}
