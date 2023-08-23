int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 1)
		return (0);
	else
	{
		while (nb >= 1)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
}

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 1)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		result *= ft_recursive_factorial(nb - 1);
		return (result);
	}
}
