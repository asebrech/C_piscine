#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char *s1 = "ceci est un test";
	char *s2 = "ceci est un ";
	int res;

	res = 0;
	res = ft_strcmp(s1, s2);
	printf("%d\n", res);
	return (0);
}
