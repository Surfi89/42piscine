/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 16:57:38 by ajordan-          #+#    #+#             */
/*   Updated: 2021/06/17 17:07:06 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	p;

	p = 0;
	while (str[p] != 0)
	{
		if ((str[p] < 'a') || (str[p] > 'z'))
			return (0);
		p++;
	}
	return (1);
}
