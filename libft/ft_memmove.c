/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <jobando-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 19:41:41 by jobando-          #+#    #+#             */
/*   Updated: 2020/06/28 19:41:43 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * La función memmove() copia n bytes del área de memoria src al área de
 * memoria dest. Las áreas de memoria pueden solaparse.
 *
 * La función memmove() devuelve un puntero a dest.
 *
 * */

//#include <string.h>

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	*new_src;

	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
	{
		new_dest = (unsigned char *)dest;
		new_src = (unsigned char *)src;
		while (n--)
			*new_dest++ = *new_src++;
	}
	else
	{
		new_dest = (unsigned char *)dest + (n - 1);
		new_src = (unsigned char *)src + (n - 1);
		while (n--)
			*new_dest-- = *new_src--;
	}
	return (dest);
}
