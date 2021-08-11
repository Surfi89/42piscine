/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:31:45 by ajordan-          #+#    #+#             */
/*   Updated: 2021/06/17 09:44:37 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	pos;
	int	turns;

	temp = 0;
	pos = 0;
	turns = size / 2;
	while (turns > 0)
	{
		temp = tab[pos];
		tab[pos] = tab[size - 1];
		tab[size - 1] = temp;
		size--;
		pos++;
		turns--;
	}
}
