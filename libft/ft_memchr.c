/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <jobando-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 11:38:28 by jobando-          #+#    #+#             */
/*   Updated: 2020/07/01 11:44:25 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* La función memchr() rastrea los primeros n bytes de área de memoria apuntada
* por s buscando el carácter c. La operación acaba al llegarse al primer byte que
* concuerde con c (interpretado como un carácter sin signo).
*
* La función memchr() devuelve un puntero al byte que concuerda, o NULL si el
* carácter no está en el área de memoria especificada.
*
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
