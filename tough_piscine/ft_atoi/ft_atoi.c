int	ft_atoi(char *strs)
{
	int	nbr;
	int	sign;

	nbr = 0;
	sign = 1;
	while (*strs == 32 || (*strs >= 9 && *strs <= 13))
		strs++;
	if (*strs == '+' || *strs == '-')
	{
		if (*strs == '-')
			sign *= -1;
		strs++;
	}
	while (*strs >= '0' && *strs <= '9')
	{
		nbr = nbr * 10 + (*strs - '0');
		strs++;
	}
	nbr *= sign;
	return (nbr);
}
