/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 09:35:41 by ajordan-          #+#    #+#             */
/*   Updated: 2021/06/18 10:29:07 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	p1;
	int	p2;

	p1 = 0;
	p2 = 0;
	while (str[p1] != 0)
	{
		if (p2 == 0 && (str[p1] >= 'a' && str[p1] <= 'z'))
		{
			str[p1] = str[p1] - 32;
			p2++;
		}
		else if (p2 > 0 && (str[p1] >= 'A' && str[p1] <= 'Z'))
			str[p1] = str[p1] + 32;
		else if ((str[p1] < '0') || (str[p1] > '9' && str[p1] < 'A')
			|| (str[p1] > 'Z' && str[p1] < 'a') || (str[p1] > 'z'))
			p2 = 0;
		else
			p2++;
		p1++;
	}
	return (str);
}
