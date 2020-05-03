/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 13:14:38 by jobando-          #+#    #+#             */
/*   Updated: 2019/10/14 19:50:38 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/********************
 * función que muestra 'N' o 'P' en función del signo del entero que se
 * haya pasado como parametro. Si n es negativo muestra 'N'. Si m es 
 * positivo o nulo mostrar 'P'.
 * ****************/

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}
