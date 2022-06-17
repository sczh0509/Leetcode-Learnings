#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	displaybits(unsigned int num)
{
	unsigned int	mask;
	int		i;

	mask = 1;
	i = 1;
	// left shift 1 by 31 bits
	mask = mask << 31;
	while (i <= 32)
	{
		if (mask & num)
		{
			ft_putchar('1');
		}
		else
		{
			ft_putchar('0');
		}
		if (i % 8 == 0)
		{
			ft_putchar(' ');
		}
		i++;
		// shift the unsigned int 1 bit to the left
		num = num << 1;
	}
	ft_putchar('\n');
}

int	main(void)
{
	unsigned int	a = 1;
	unsigned int	b = 2;
	unsigned int	c = 3;

	displaybits(b);
	displaybits(b - a);
	displaybits(c);
	displaybits(c - b);
}
