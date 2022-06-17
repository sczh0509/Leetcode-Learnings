#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	partition(int *salary, int low, int high)
{
	int	pivot;
	int	current_greater;
	int	i;

	pivot = salary[high];
	current_greater = low - 1;
	for (i = low; i < high; i++)
	{
		if (salary[i] <= pivot)
		{
			current_greater++;
			ft_swap(&salary[current_greater], &salary[i]);
		}
	}	
	ft_swap(&salary[high], &salary[current_greater + 1]);
	return (current_greater + 1);
}

void	quickSort(int *salary, int low, int high)
{
	int	pi;

	if (low < high)
	{
		pi = partition(salary, low, high);		
		quickSort(salary, low, pi - 1);
		quickSort(salary, pi + 1, high);
	}
}

double	average(int *salary, int salarysize)
{
	double	sum;
	int	i;

	sum = 0;
	quickSort(salary, 0, salarysize - 1);
	for (i = 1; i < salarysize - 1; i++)
	{
		sum += salary[i];
	}

	return (sum / (salarysize - 2));
}

int	main(void)
{
	int salary[] = {4000, 3000, 1000, 2000};
	double	avg = average(salary, 4);
	printf("average salaray is %.2f\n", avg);
}

