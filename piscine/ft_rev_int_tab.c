/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:36:23 by jobando-          #+#    #+#             */
/*   Updated: 2019/10/16 16:58:12 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/********************
 * función que invierta el orden de los elementos de una tabla de enteros.
 * los parámetros son un puntero a entero y el número de enteros de
 * la tabla.
 * ******************/

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int aux;
	int i;

	size = size - 1;
	i = 0;
	while (size > i)
	{
		aux = tab[i];
		tab[i] = tab[size];
		tab[size] = aux;
		i++;
		size--;
	}
}
