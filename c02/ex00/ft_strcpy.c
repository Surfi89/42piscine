/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:20:45 by ajordan-          #+#    #+#             */
/*   Updated: 2021/06/17 12:33:02 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	pos;

	pos = 0;
	while (src[pos] != 0)
	{
		dest[pos] = src[pos];
		pos++;
	}
	dest[pos] = 0;
	return (dest);
}
