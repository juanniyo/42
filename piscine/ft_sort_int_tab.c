/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:36:00 by jobando-          #+#    #+#             */
/*   Updated: 2019/10/16 18:40:32 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/********************
 * función que ordene una tabla de enteros en orden creciente.
 * los parámetros son un puntero a entero y el número de enteros de 
 * la tabla.
 * *****************/

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int aux;
	int i;
	int j;

	size = size - 1;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[j] > tab[j + 1])
			{
				aux = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = aux;
			}
			j++;
		}
		i++;
	}
}
