#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

void	sort_salary(int *salary, int salarySize)
{
	int	current_min;
	int	i;
	int	j;

	i = 0;
	while (i < salarySize)
	{
		current_min = i;
		j = i + 1;
		while (j < salarySize)
		{
			if (salary[current_min] > salary[j])
			{
				current_min = j;
			}
			j++;
		}
		ft_swap(&salary[current_min], &salary[i]);
		i++;
	}
}

double	average(int *salary, int salarySize)
{
	double	sum;
	int	i;

	sum = 0;
	i = 1;
	sort_salary(salary, salarySize);
	while (i < salarySize)
	{
		sum += salary[i];
		i++;
	}
	return (sum / (salarySize - 2));
}

int	main(void)
{
	double	result;
	int	salary[7] = {4000, 3000, 1000, 2000};
	int	size = sizeof(salary) / sizeof(salary[0]);

	result =  average(salary, size);
	printf("average salary = %.2f\n", result);
}

