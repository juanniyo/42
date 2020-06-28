/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <jobando-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 19:30:10 by jobando-          #+#    #+#             */
/*   Updated: 2020/06/28 19:37:54 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * La función bzero() pone a cero los primeros n bytes del área de bytes que
 * comienza en s.
 *
 * Valor devuelto: NINGUNO...
 *
 * */

//#include <string.h>

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*cs;
	size_t			i;

	i = 0;
	cs = (unsigned char *)s;
	while (i < n)
	{
		cs[i] = 0;
		i++;
	}

}
