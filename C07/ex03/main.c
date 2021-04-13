#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int		main(void)
{
	char *str;
	char *sep;
	char *strs[5];

	sep = " ; ";
	strs[0] = "ceci";
	strs[1] = "est";
	strs[2] = "un";
	strs[3] = "test";
	strs[4] = " ! ";
	str = ft_strjoin(5, strs, sep);
	printf("%s\n", str);
}
