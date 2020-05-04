/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 13:47:03 by jobando-          #+#    #+#             */
/*   Updated: 2019/10/15 14:29:20 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/********************
 * esta función divide los int apuntados por a y b.
 * el resultado de la división se almacena en el int apuntado por a.
 * el resultado del resto  de la división se almacena en el int apuntado por b.
 * *****************/*

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int ultimate;

	ultimate = *a;
	*a = *a / *b;
	*b = ultimate % *b;
}
