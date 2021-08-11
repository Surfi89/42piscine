#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char dest[20] = "Hola";
	char src[] = ", que tal Urduliz";
	unsigned int nb = 8;

	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n", dest, src, nb);
	ft_strncat(dest, src, nb);
	printf("result = %s\n-----\n", dest);

	return (0);
}
