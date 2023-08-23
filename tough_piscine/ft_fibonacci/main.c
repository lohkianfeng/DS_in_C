#include <stdio.h>
#include "ft_fibonacci.c"

int	main(void)
{
	int	i;

	i = 0;
	while (i < 15)
	{
		printf("%d, ", ft_fibonacci(i));
		i++;
	}
	printf("%d\n", ft_fibonacci(15));
	return (0);
}
