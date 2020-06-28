/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <jobando-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 19:42:09 by jobando-          #+#    #+#             */
/*   Updated: 2020/06/28 19:42:35 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * La función memset() rellena los primeros n bytes del área de memoria
 * apuntada por s con el byte constante c.
 *
 * La función memset() devuelve un puntero al área de memoria s.
 *
 * */

//#include <string.h>

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	src;
	size_t		i;

	dest = s;
	src = c;
	i = 0;
	while (i < n)
	{
		dest[i] = src;
		i++;
	}
	return (dest);
}
