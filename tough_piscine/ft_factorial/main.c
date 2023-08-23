#include <stdio.h>
#include "ft_factorial.c"

int	main(void)
{
	int	nb = 5;
	printf("5: %d\n", ft_iterative_factorial(nb));
	printf("5: %d\n", ft_recursive_factorial(nb));

	nb = 10;
	printf("10: %d\n", ft_iterative_factorial(nb));
	printf("10: %d\n", ft_recursive_factorial(nb));

	nb = 0;
	printf("0: %d\n", ft_iterative_factorial(nb));
	printf("0: %d\n", ft_recursive_factorial(nb));

	nb = 1;
	printf("1: %d\n", ft_iterative_factorial(nb));
	printf("1: %d\n", ft_recursive_factorial(nb));

	nb = -1;
	printf("-1: %d\n", ft_iterative_factorial(nb));
	printf("-1: %d\n", ft_recursive_factorial(nb));

	return (0);
}
