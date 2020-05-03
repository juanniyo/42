/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:40:10 by jobando-          #+#    #+#             */
/*   Updated: 2019/10/14 16:30:45 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/********************
 * función que muestra un número pasado como parametro. la función
 * debera ser capaz de mostrar todos los valores posibles en una 
 * variable de tipo int.
 * *****************/

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long i;

	i = nb;
	if (i < 0)
	{
		ft_putchar('-');
		i = i * (-1);
	}
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
	{
		ft_putchar(i + '0');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
