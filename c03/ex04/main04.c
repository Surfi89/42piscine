#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[] = "Hola, que tal Urduliz";
	char to_find[] = "que";

	printf("-----\nstr = %s\nto_find = %s\n", str, to_find);
	printf("%s\n", ft_strstr(str, to_find));

	return (0);
}
