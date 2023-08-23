#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *base)
{
	int	len;

	len = 0;
	while (*base)
	{
		len++;
		base++;
	}
	return (len);
}

void	ft_putnbr_base(int nb, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (nb < 0)
	{
	}
	else if (nb > len - 1)
	{
		ft_putnbr_base(nb / len, base);
		ft_putnbr_base(nb % len, base);
	}
	else
		ft_putchar(base[nb]);
}
