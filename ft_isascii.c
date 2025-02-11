int	ft_isascii(int c)
{
	if (0 <= c && c <= 177)
		return (1);
	return (0);
}
