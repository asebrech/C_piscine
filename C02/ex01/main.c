#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int		main()
{
	char src[] = "salut";
	char dest[] = "hello world";

	ft_strncpy(dest, src, 4);
	printf("%s\n", dest);
}
