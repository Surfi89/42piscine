/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:03:41 by ajordan-          #+#    #+#             */
/*   Updated: 2021/06/17 10:16:35 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>  

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		ft_putchar(*str);
		str++;
	}
}
