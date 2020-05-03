/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 13:02:16 by jobando-          #+#    #+#             */
/*   Updated: 2019/10/14 19:50:21 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/********************
 * función que muestra todos los digitos sobre una sola línea, 
 * en orden creciente.
 * *****************/

#include <unistd.h>

void	ft_print_numbers(void)
{
	char nbr;

	nbr = '0';
	while (nbr <= '9')
	{
		write(1, &nbr, 1);
		nbr++;
	}
}
