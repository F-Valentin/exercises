#include <stdio.h>

void	ft_rev_in_tab(void)
{
	int	i;
	int	x;
	int	tab[] = {1, 2, 3, 4, 5};
	int	temp;

	i = 0;
	x = 4;
	while (i < 4 / 2)
	{
		temp = tab[i];
		tab[i] = tab[x];
		tab[x] = temp;
		i++;
		x--;
	}

	// Show table
	for (int j = 0; j < 5; j++)
	{
		printf("%d\n", tab[j]);
	}
}

int	main(void)
{
	ft_rev_in_tab();
	return (0);
}