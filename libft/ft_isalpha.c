/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 20:19:51 by jobando-          #+#    #+#             */
/*   Updated: 2020/07/13 20:31:09 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/* Comprueba si el carácter es alfabético; en la localización estándar "C",   */
/* es equivalente a (isupper(c) || islower(c)). En algunas localizaciones,    */
/* pueden existir caracteres adicionales para los que isalpha() sea verdad:   */
/* letras que no sean ni mayúsculas ni minúsculas.			      */
/*									      */
/* Los valores devueltos son no-cero si el carácter c cae dentro de la clase  */
/* pedida, y cero si no. 						      */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
		return (0);
	else
		return (1);
}
