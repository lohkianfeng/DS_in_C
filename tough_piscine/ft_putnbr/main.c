#include <unistd.h>
#include <stdio.h>
#include "ft_putnbr.c"

int	main(void)
{
	int	n = 123;
	printf("PC: %d\n", n);
	ft_putnbr(n);
	printf("\n");

	n = -123;
	printf("PC: %d\n", n);
	ft_putnbr(n);
	printf("\n");

	n = 2147483647;
	printf("PC: %d\n", n);
	ft_putnbr(n);
	printf("\n");

	n = -2147483648;
	printf("PC: %d\n", n);
	ft_putnbr(n);
	printf("\n");

	n = 2147483648;
	printf("PC: %d\n", n);
	ft_putnbr(n);
	printf("\n");

}

