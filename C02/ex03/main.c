#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	char	str[] = "117";
	int t;

	t = ft_str_is_numeric(str);
	printf("%d\n", t);
}
