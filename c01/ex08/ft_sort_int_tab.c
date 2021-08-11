/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 18:21:15 by ajordan-          #+#    #+#             */
/*   Updated: 2021/06/17 10:22:43 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	pos_1;
	int	pos_2;
	int	temp;
	int	turns;

	turns = 0;
	while (turns <= size - 1)
	{
		pos_1 = 0;
		while (pos_1 <= size - 2)
		{
			pos_2 = pos_1 + 1;
			if (tab[pos_1] >= tab[pos_2])
			{
				temp = tab[pos_1];
				tab[pos_1] = tab[pos_2];
				tab[pos_2] = temp;
			}
			pos_1++;
		}
		turns++;
	}
}
