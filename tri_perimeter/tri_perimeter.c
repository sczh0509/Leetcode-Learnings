#include <stdio.h>

void	sortPerimeter(int *nums, int numsSize);
void	ft_swap(int *a, int *b);
int	largestPerimeter(int *nums, int numsSize);
void	display_arr(int *nums, int numsSize);

int	main(void)
{
	int a[] = {1, 2, 1};
	display_arr(a, 3);
	printf("after sorting \n");
	sortPerimeter(a, 3);
	display_arr(a, 3);
	int	largest_perimeter = largestPerimeter(a, 3);
	printf("The largest possible perimeter of a triangle is %d.\n", largest_perimeter);
}
	

int	largestPerimeter(int *nums, int numsSize)
{
	int	a, b, c;

	c = 0;
	while (c < numsSize - 2)
	{
		b =  c + 1;
		a = c + 2;
		if (nums[a] + nums[b] > nums[c])
		{
			return (nums[a] + nums[b] + nums[c]);
		}
		c++;
	}
	return (0);
}

void	sortPerimeter(int *nums, int numsSize)
{
	int	i;
	int	j;
	int	max;

	i = 0;
	while (i < numsSize - 1)
	{
		j = i + 1;
		max = i;
		while (j < numsSize)
		{
			if (nums[max] < nums[j])
			{
				max = j;
			}
			j++;
		}
		ft_swap(&nums[max], &nums[i]);
		i++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	display_arr(int *nums, int numsSize)
{
	int	i;

	i = 0;
	while (i < numsSize)
	{
		printf("%d ", nums[i]);
		i++;
	}
	printf("\n");
}
