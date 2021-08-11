#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char dest[20] = "Hola";
	char src[] = ", Urduliz!";

	printf("-----\ndest = %s\nsrc = %s\n", dest, src);
	ft_strcat(dest, src);
	printf("result = %s\n-----\n", dest);

	return (0);
}
