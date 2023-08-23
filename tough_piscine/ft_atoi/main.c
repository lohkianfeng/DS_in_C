#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_atoi.c"

int	main(void)
{
	char	*s1 = "\t \n \v \f \r -123";
	printf("PC: %d\n", atoi(s1));
	printf("MY: %d\n", ft_atoi(s1));

	char	*s2 = "--123";
	printf("PC: %d\n", atoi(s2));
	printf("MY: %d\n", ft_atoi(s2));

	char	*s3 = "2147483647";
	printf("PC: %d\n", atoi(s3));
	printf("MY: %d\n", ft_atoi(s3));

	char	*s4 = "2147483648";
	printf("PC: %d\n", atoi(s4));
	printf("MY: %d\n", ft_atoi(s4));

	char	*s5 = "-2147483648";
	printf("PC: %d\n", atoi(s5));
	printf("MY: %d\n", ft_atoi(s5));

	char	*s6 = "-2147483649";
	printf("PC: %d\n", atoi(s6));
	printf("MY: %d\n", ft_atoi(s6));

	char	*s7 = "-123abc456";
	printf("PC: %d\n", atoi(s7));
	printf("MY: %d\n", ft_atoi(s7));

	char	*s8 = "abc 123";
	printf("PC: %d\n", atoi(s8));
	printf("MY: %d\n", ft_atoi(s8));

	char	*s9 = "-1a2b3c";
	printf("PC: %d\n", atoi(s9));
	printf("MY: %d\n", ft_atoi(s9));
}

