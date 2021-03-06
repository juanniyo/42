/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 20:41:34 by jobando-          #+#    #+#             */
/*   Updated: 2020/07/13 20:46:25 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/* Comprueba si el carácter es un digito (de 0 a 9).                          */
/* 									      */
/* Los valores devueltos son no-cero si el carácter c cae dentro de la clase  */
/* pedida, y cero si no.						      */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
