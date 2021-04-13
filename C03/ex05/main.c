#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char src[] = "Noble6-spartan312";
	char dest[100] = "Spartan 117 ";
	char dest2[100] = "Spartan 117 ";
	int i;
	int j;

	i = ft_strlcat(dest, src, 0);
	j = strlcat(dest2, src, 0);
	printf("%s\n%d\n", dest, i);
	printf("%s\n%d\n", dest2, j);
}
