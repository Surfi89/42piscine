#include <stdio.h>

#include "./ex00/ft_putchar.c"
#include "./ex01/ft_print_alphabet.c"
#include "./ex02/ft_print_reverse_alphabet.c"
#include "./ex03/ft_print_numbers.c"
#include "./ex04/ft_is_negative.c"
#include "./ex05/ft_print_comb.c"
#include "./ex06/ft_print_comb2.c"
#include "./ex07/ft_putnbr.c"
//#include "./ex08/ft_print_combn.c"

int main(void)
{
	write(1, "ex00:\n ", 6);
	ft_putchar('a');
	write(1, "\n\nex01:\n", 8);
	ft_print_alphabet();
	write(1, "\n\nex02:\n ", 8);
	ft_print_reverse_alphabet();
	write(1, "\n\nex03:\n", 8);
	ft_print_numbers();
	write(1, "\n\nex04:\n", 8);
	ft_is_negative(-4);
	write(1, "\n\nex05:\n", 8);	
	ft_print_comb();
	write(1, "\n\nex06:\n", 8);
	ft_print_comb2();
	write(1, "\n\nex07:\n", 8);
	ft_putnbr(124565363);
//	write(1, "\n\nex08:\n", 8);
//	ft_print_combn(3);
	return(0);
}
