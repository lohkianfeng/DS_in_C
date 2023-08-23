#include <stdio.h>
#include <math.h>
#include "ft_sqrt.c"

int	main(void)
{
	int	i = -1;
	printf("-1: %f\n", sqrt(i));
	printf("-1: %d\n", ft_sqrt(i));

	i = 0;
	printf("0: %f\n", sqrt(i));
	printf("0: %d\n", ft_sqrt(i));

	i = 1;
	printf("1: %f\n", sqrt(i));
	printf("1: %d\n", ft_sqrt(i));

	i = 2;
	printf("2: %f\n", sqrt(i));
	printf("2: %d\n", ft_sqrt(i));

	i = 4;
	printf("4: %f\n", sqrt(i));
	printf("4: %d\n", ft_sqrt(i));

	i = 9;
	printf("9: %f\n", sqrt(i));
	printf("9: %d\n", ft_sqrt(i));

	i = 2147483649;
	printf("2147483649: %f\n", sqrt(i));
	printf("2147483649: %d\n", ft_sqrt(i));

	i = 2147395600;
	printf("2147395600: %f\n", sqrt(i));
	printf("2147395600: %d\n", ft_sqrt(i));
}
