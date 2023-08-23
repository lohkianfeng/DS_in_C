#include <unistd.h>
#include <stdio.h>
#include "ft_putnbr_base.c"

int	main(void)
{
	char	*binary = "01";
//	char	*hexadec = "0123456789ABCDEF";
//	char	*octal = "poneyvif";

	int	n = 5;
	printf("PC: 101\n");
	ft_putnbr_base(n, binary);
	printf("\n");

	n = 10;
	printf("PC: 1010\n");
	ft_putnbr_base(n, binary);
	printf("\n");

	n = 15;
	printf("PC: 1111\n");
	ft_putnbr_base(n, binary);
	printf("\n");

	n = 0;
	printf("PC: 0\n");
	ft_putnbr_base(n, binary);
	printf("\n");

	n = 1;
	printf("PC: 1\n");
	ft_putnbr_base(n, binary);
	printf("\n");

}

