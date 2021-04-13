#include <stdio.h>

char *ft_strlcpy(char *dest, char *src, unsigned int size);

int		main()
{
	char src[] = "salut";
	char dest[] = "hello world";

	ft_strlcpy(dest, src, 4);
	printf("%s\n", dest);
}
