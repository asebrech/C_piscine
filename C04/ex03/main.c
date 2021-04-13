#include <stdio.h>

int		ft_atoi(char *str);

int		main(void)
{
	char str[] = " ---+--+1234ab567";
	int res;

	res = ft_atoi(str);
	printf("%d\n", res);
	return (0);
}
