#include <stdio.h>

int	subtractProductAndSum(int n)
{
	int	sum;
	int	product;
	
	sum = 0;
	product = 1;
	while (n)
	{
		sum += n % 10;
		product *= n %10;
		n /= 10;
	}
	return (product - sum);
}

int	main(void)
{
	int	n;
	int	result;

	n = 4421;
	result = subtractProductAndSum(n);
	printf("%d\n", result);
}
