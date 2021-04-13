#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(void)
{
	char	str[] = "John117Noble6";

	ft_strupcase(str);
	printf("%s\n", str);
}
