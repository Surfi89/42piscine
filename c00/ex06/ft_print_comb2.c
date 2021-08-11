/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:50:10 by ajordan-          #+#    #+#             */
/*   Updated: 2021/06/16 10:50:17 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_digit(char a, char b)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, " ", 1);
}

void	ft_print_comb2(void)
{
	int		n1;
	int		n2;
	char	a;
	char	b;

	n1 = 0;
	n2 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			a = n1 / 10 + '0';
			b = n1 % 10 + '0';
			ft_digit (a, b);
			a = n2 / 10 + '0';
			b = n2 % 10 + '0';
			write (1, &a, 1);
			write (1, &b, 1);
			if (n1 != 98 || n2 != 99)
				write (1, ", ", 2);
			n2++;
		}
		n1++;
	}
}
