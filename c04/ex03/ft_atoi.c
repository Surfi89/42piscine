/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 19:05:28 by ajordan-          #+#    #+#             */
/*   Updated: 2021/06/24 10:29:35 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	cnt;
	int	neg;
	int	num;

	cnt = 0;
	neg = 1;
	num = 0;
	while ((str[cnt] >= '\t' && str[cnt] <= '\r') || str[cnt] == ' ')
		cnt++;
	while (str[cnt] == '+' || str[cnt] == '-')
	{
		if (str[cnt] == '-')
			neg = neg * -1;
		cnt++;
	}
	while (str[cnt] >= '0' && str[cnt] <= '9')
	{
		num = (str[cnt] - '0') + (num * 10);
		cnt++;
	}
	return (num * neg);
}
