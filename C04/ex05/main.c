#include <stdio.h>

int		ft_atoi_base(char *str, char *base);

int		main(void)
{
	char str[] = " ---+--+1234ab567";
	char base[] = "0123456789";
	int res;

	res = ft_atoi_base(str, base);
	printf("%d\n", res);
	return (0);
}
