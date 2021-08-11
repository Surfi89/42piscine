/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:08:38 by ajordan-          #+#    #+#             */
/*   Updated: 2021/06/20 17:59:32 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	pos;

	pos = 0;
	while ((src[pos] != 0) && (pos < n))
	{
		dest[pos] = src[pos];
		pos++;
	}
	while (pos < n)
	{
		dest[pos] = 0;
		pos++;
	}
	return (dest);
}
