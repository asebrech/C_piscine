#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char *s1 = "ceci est un test du test du test du";
	char *s2 = "ceci est un test du test du   ewddf ";
	int res;

	res = 0;
	res = ft_strncmp(s1, s2, 50);
	printf("%d\n", res);
	return (0);
}
