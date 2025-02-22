#include "libft.h"

static int	ft_is_char_in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_get_trimmed_size(const char *string, const char *set)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (ft_is_char_in_set(string[i], set))
		i++;
	while (string[i])
	{
		len++;
		i++;
	}
	while (ft_is_char_in_set(string[--i], set))
		len--;
	return (len);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*trim;
	size_t	size;
	size_t	i;
	size_t	j;

	size = ft_get_trimmed_size(s1, set);
	trim = (char *)malloc((size + 1) * sizeof(char));
	if (!trim)
		return (NULL);
	i = 0;
	while (ft_is_char_in_set(s1[i], set))
		i++;
	j = 0;
	while (!ft_is_char_in_set(s1[i], set))
	{
		trim[j] == s1[i];
		i++;
		j++;
	}
	trim[j] = '\0';
	return (trim);
}
