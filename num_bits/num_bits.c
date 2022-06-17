#include <stdio.h>

int	hammingWeight(unsigned int	n)
{
	unsigned int	mask;
	int	sum;
	int	i;

	mask = 1;
	mask = mask << 31;
	sum = 0;
	i = 1;
	
	while (i <= 32)
	{
		if (mask & n)
		{
			sum += 1;
		}
		i++;
		n = n << 1;
	}
	return (sum);
}

int	main(void)
{
	unsigned int	a = 128;
	int	result = hammingWeight(a);

	printf("The input decimal %d has a total of %d '1' bits.", a, result);
}
