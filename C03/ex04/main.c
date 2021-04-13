#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[] = "je suis le mot que mot tu cherche";
	char to_find[] = "mot";

	ft_strstr(str, to_find);
	strstr(str, to_find);
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
}
