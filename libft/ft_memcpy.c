/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <jobando-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 19:40:04 by jobando-          #+#    #+#             */
/*   Updated: 2020/06/28 19:40:08 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * La función memcpy() copia n bytes desde el area de memoria src al area
 * dest. Dichas areas de memoria no deben tener nuingun punto de intersección;
 * en tal caso utilizar la función memmove(3) en lugar de memcpy().
 *
 * La funcion memcpy() devuelve un puntero a dest.
 *
 * */

//#include <string.h>

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	*new_src;
	size_t		i;

	new_dest = (unsigned char *)dest;
	new_src = (unsigned char *)src;
	if (!dest && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		*new_dest++ = *new_src++;
		i++;
	}
	return (dest);
}
