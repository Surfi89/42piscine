/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 18:30:06 by ajordan-          #+#    #+#             */
/*   Updated: 2021/06/17 18:31:20 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	p;

	p = 0;
	while (str[p] != 0)
	{
		if ((str[p] >= 'A') && (str[p] <= 'Z'))
			str[p] = str[p] + 32;
		p++;
	}
	return (str);
}
