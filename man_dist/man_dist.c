#include <stdio.h>

int	getManhattanDistance(int *a, int *b);
int	ft_abs(int b);
int	checkValid(int *a, int *b);
int	nearestValidPoint(int x, int y, int **points, int pointsSize, int *pointsColSize);

int	main(void)
{
	int	*a[] = 
	{
		(int[]) {1, 2}, 
		(int[]) {3, 1},
		(int[]) {2, 4}, 
		(int[]) {2, 3}, 
		(int[]) {4, 4}
	};
	int	b = 2;

	
	int	result = nearestValidPoint(3, 4, a, 5, &b);	
	printf("The smallest index of a valid point is  %d.\n", result);
}

int	nearestValidPoint(int x, int y, int **points, int pointsSize, int *pointsColSize)
{
	int	current_loc[2];
	int	i, smallest_index, smallest_dist;

	current_loc[0] = x;
	current_loc[1] = y;
	smallest_index = -1;
	smallest_dist = 0;
	i = 0;

	while (i < pointsSize)
	{
		if (checkValid(current_loc, points[i]) && smallest_index == -1)
		{
			smallest_index = i;
			smallest_dist = getManhattanDistance(current_loc, points[i]);
		}
		else if (checkValid(current_loc, points[i]))
		{
			if (getManhattanDistance(current_loc, points[i]) < smallest_dist)
			{
				smallest_index = i;
				smallest_dist = getManhattanDistance(current_loc, points[i]);
			}
		}
		i++;
	}
	return (smallest_index);
}

int	checkValid(int *a, int *b)
{
	if (a[0] == b[0] || a[1] == b[1])
	{
		return (1);
	}
	return (0);
}

int	getManhattanDistance(int *a, int *b)
{
	int	d;

	d = ft_abs(a[0] - b[0]) + ft_abs(a[1] - b[1]);
	return (d);
}

int	ft_abs(int b)
{
	if (b < 0)
	{
		return (b * -1);
	}
	return (b);
}
