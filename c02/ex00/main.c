#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	source[] = "Hola Urduliz";
	char	destin[] = "Como lo llevas";
	char	*dest;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", source, destin);
	dest = ft_strcpy(destin, source);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", source, dest);
	return (0);
}
