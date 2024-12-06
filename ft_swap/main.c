#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 20;
	printf("the value of a is : %d, the value of b is : %d\n", a, b);
	ft_swap(&a, &b);
	printf("the value of a is : %d, the value of b is : %d\n", a, b);
	return (0);
}