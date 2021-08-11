/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:51:03 by ajordan-          #+#    #+#             */
/*   Updated: 2021/06/16 12:14:38 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putcharac(char c);

void	ft_putcharac(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putcharac('8');
	}
	else if (nb < 0)
	{
		ft_putcharac('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_putcharac(nb % 10 + 48);
	}
}
