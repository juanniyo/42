/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 11:54:31 by jobando-          #+#    #+#             */
/*   Updated: 2019/10/14 19:34:48 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/********************
 * función que muestra el caracter pasado como parámetro.
 *******************/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
