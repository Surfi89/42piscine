#include <stdio.h>

void	ft_putstr(char *str);

int		main(void)
{
	char str[] = "Hola, Urduliz!";
	char *p_str;

	p_str = str;
	ft_putstr(p_str);
}
