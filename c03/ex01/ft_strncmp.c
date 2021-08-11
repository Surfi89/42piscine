/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 18:07:36 by ajordan-          #+#    #+#             */
/*   Updated: 2021/06/21 19:04:50 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cnt;
	int				diff;

	cnt = 0;
	diff = 0;
	while ((cnt < n) && !diff && (s1[cnt] != '\0') && (s2[cnt] != '\0'))
	{
		diff = s1[cnt] - s2[cnt];
		cnt++;
	}
	if (cnt < n && !diff && (s1[cnt] == '\0' || s2[cnt] == '\0'))
		diff = s1[cnt] - s2[cnt];
	return (diff);
}
