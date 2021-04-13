#include <stdio.h>

char	*ft_strdup(char *src);

int     main(void)
{
    char src[] = "salut";
    char *dest;

    dest = ft_strdup(src);
    printf("%s\n", dest);
}
