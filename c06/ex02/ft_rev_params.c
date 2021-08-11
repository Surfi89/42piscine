/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 11:25:16 by ajordan-          #+#    #+#             */
/*   Updated: 2021/06/28 11:39:16 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	a;

	i = 0;
	a = argc - 1;
	if (argc > 1)
	{
		while (a > 0)
		{
			i = 0;
			while (argv[a][i] != 0)
			{
				write (1, &argv[a][i], 1);
				i++;
			}
			write (1, "\n", 1);
			a--;
		}
	}
	return (0);
}
