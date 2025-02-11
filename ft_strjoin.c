#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		len_s1;
	int		len_s2;
	int		i;
	int		j;
	char	*join;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	join = (char *)malloc((len_s1 + len_s1 + 1) * sizeof(char));
	if (!join)
		return (NULL);
	i = -1;
	j = -1;
	while (++i < len_s1)
		join[++j] = s1[i];
	i = -1;
	while (++i < len_s2)
		join[++j] = s2[i];
	join[++j] = '\0';
	return (join);
}
