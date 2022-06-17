#include <stdio.h>

int	countOdds(int low, int high)
{
	if ((low % 2 == 0) && (high % 2 == 0))
	{
		return ((high - low) / 2);
	}
	return ((high - low) / 2 + 1);
}

int	main(void)
{
	printf("number of odd numbers (inclusive) between 1 and 11 -> %d\n", countOdds(1, 11));
	printf("number of odd numbers (inclusive) between 1 and 10 -> %d\n", countOdds(1, 10));
}
