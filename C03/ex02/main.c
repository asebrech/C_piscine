#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char dest[100] = "Spartan 117 ";
	char src[] = "Noble 6";

	ft_strcat(dest, src);
	printf("%s\n", dest);
}
