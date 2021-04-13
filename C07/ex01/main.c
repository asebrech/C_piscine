#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int *tab;
	int i;

	i = 0;
	tab = ft_range(10, 25);
	while (i != 15)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}
