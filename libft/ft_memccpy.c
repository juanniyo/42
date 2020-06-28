/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <jobando-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 19:35:21 by jobando-          #+#    #+#             */
/*   Updated: 2020/06/28 19:40:54 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * La función memccpy() copia como mucho n bytes desde el área de memoria
 * orig al área de memoria dest, parando cuando se encuentra
 * el caracter c.
 *
 * La función memccpy() devuelve un puntero al siguiente carácter de dest
 * tras c, o NULL si c no estaba en los n primeros caracteres de orig.
 *
 * */

//#include <string.h>

#include <stddef.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	*new_orig;
	size_t		i;

	new_dest = (unsigned char *)dest;
	new_orig = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		new_dest[i] = new_orig[i];
		if (new_orig[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
