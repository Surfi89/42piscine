/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:05:50 by ajordan-          #+#    #+#             */
/*   Updated: 2021/06/17 17:07:56 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	p;

	p = 0;
	while (str[p] != 0)
	{
		if ((str[p] < 'A') || (str[p] > 'Z'))
			return (0);
		p++;
	}
	return (1);
}
