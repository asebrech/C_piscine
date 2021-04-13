#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char	str[] = "SALUT";
	int t;

	t = ft_str_is_uppercase(str);
	printf("%d\n", t);
}
