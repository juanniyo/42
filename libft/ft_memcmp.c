/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 19:08:38 by jobando-          #+#    #+#             */
/*   Updated: 2020/07/13 19:51:03 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * La función memcmp() compara los primeros n bytes de las areas de memoria S1
 * y S2. Devuelve un entero menor, igual a o mayor que cero si S1 es, 
 * respectivamente, menor, igual o mayor que S2.
 *
 * La función devuelve un entero menor, igual o mayor que cero si S1 es, 
 * respectivamente, menor, igual o mayor que S2.
 *
 * */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t		i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
