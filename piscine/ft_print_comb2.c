/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:01:29 by jobando-          #+#    #+#             */
/*   Updated: 2019/10/14 19:51:13 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/********************
 * función que muestra todas las combinaciones posibles de dos números
 * entre 0 y 99, en orden creciente.
 * *****************/

#include <unistd.h>

void	ft_print_comb2(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			k = i / 10 + '0';
			write(1, &k, 1);
			k = i % 10 + '0';
			write(1, &k, 1);
			write(1, " ", 1);
			k = j / 10 + '0';
			write(1, &k, 1);
			k = j % 10 + '0';
			write(1, &k, 1);
			if (!(i == 98))
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
