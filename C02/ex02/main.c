#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	char	str[] = "test";
	int t;

	t = ft_str_is_alpha(str);
	printf("%d\n", t);
}
