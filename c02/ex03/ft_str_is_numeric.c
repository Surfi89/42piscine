/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 16:41:01 by ajordan-          #+#    #+#             */
/*   Updated: 2021/06/17 16:46:45 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	p;

	p = 0;
	while (str[p] != 0)
	{
		if ((str[p] < '0') || (str[p] > '9'))
			return (0);
		p++;
	}
	return (1);
}
