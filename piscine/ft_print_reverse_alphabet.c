/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 12:47:11 by jobando-          #+#    #+#             */
/*   Updated: 2019/10/14 19:49:57 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/********************
 * función que muestra el alfabeto en minúsculas sobre una sola linea, en
 * orden decreciente, a partir de la letra 'z'.
 * *****************/

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		write(1, &letter, 1);
		letter--;
	}
}
