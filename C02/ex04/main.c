#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	char	str[] = "salut";
	int t;

	t = ft_str_is_lowercase(str);
	printf("%d\n", t);
}
