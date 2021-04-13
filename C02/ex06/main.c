#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
		char	str[] = "\n";
	//str[2] = 20;
	int t;

	t = ft_str_is_printable(str);
	printf("%d\n", t);
}
