#include <stdio.h>

int		ft_strlen(char *str);

int		main (void)
{
	char str[] = "Urduliz";
	char *p_str;

	p_str = str;

	int count = ft_strlen(p_str);
	
	printf("%d\n", count);
}
