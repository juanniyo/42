/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 15:04:54 by jobando-          #+#    #+#             */
/*   Updated: 2019/12/12 14:36:18 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	c = (unsigned char)c;
	if (c == ' ' || c == '\t' || c == '\n' ||
			c == '\v' || c == '\r' || c == '\f')
		return (1);
	return (0);
}
