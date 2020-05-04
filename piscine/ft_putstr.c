/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:20:12 by jobando-          #+#    #+#             */
/*   Updated: 2019/10/16 19:55:12 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/********************
 * función que muestra uno a uno en la pantalla los caracteres de una 
 * cadena.
 * la dirección del primer carácter de la cadena está incluida en el 
 * puntero pasado como parámetro a la función.
 * *****************/

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i++], 1);
	}
}
