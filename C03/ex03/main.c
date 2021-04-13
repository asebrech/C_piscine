#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char src[] = "Noble6-spartan312";
	char dest[100] = "Spartan 117 ";
	char dest2[100] = "Spartan 117 ";

	ft_strncat(dest, src, 5);
	strncat(dest2, src, 5);
	printf("%s\n", dest);
	printf("%s\n", dest2);
}
