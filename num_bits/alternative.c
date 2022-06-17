// this operation: n & (n - 1) removes the rightmost bit with the value 1. Thus, the number of operations it take to make a number completely zero is also the number of '1' bits in the number.

// n = 01011100
// 1st op = 01011000
// 2nd op = 01010000
// 3rd op = 01000000
// 4th op = 00000000
// since we performed the operation 4 times, we can say that there are 4 '1' bits in the number.

// n & (n - 1) can also be used to identify if n is an exact power of two
int	hammingWeight(unsigned int n)
{
	int	sum;

	sum = 0;
	while (n)
	{
		n = n & (n - 1);
		sum++;
	}
	return (sum);
}
