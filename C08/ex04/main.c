#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int		main(int argc, char **argv)
{
	t_stock_str *stock;
	int i;

	stock = ft_strs_to_tab(argc, argv);
	i = 0;
	while (i < argc)
	{
		printf("%d\n%s\n%s\n", stock[i].size, stock[i].str, stock[i].copy);
		i++;
	}
}
