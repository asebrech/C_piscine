#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int *range;
	int i;
	int len;

	i = 0;
	len = ft_ultimate_range(&range, 10, 25);
	printf("len = %d\n", len);
	while (i != 15)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
}
