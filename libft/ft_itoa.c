/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 15:26:28 by jobando-          #+#    #+#             */
/*   Updated: 2019/12/12 15:20:39 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	putsize(int n)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		n = (n * (-1));
		i++;
	}
	while (n > 9)
	{
		i++;
		n = n / 10;
	}
	if (n <= 9 && n >= 0)
		i++;
	return (i);
}

static void	isnegative(int *n, char *map)
{
	*n = (*n * (-1));
	map[0] = '-';
}

char		*ft_itoa(int n)
{
	char	*map;
	int		i;

	if (n == -2147483648)
	{
		if (!(map = (char *)malloc(sizeof(char) * 12)))
			return (0);
		ft_strlcpy(map, "-2147483648", 12);
		return (map);
	}
	i = putsize(n);
	if (!(map = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	if (n < 0)
		isnegative(&n, map);
	map[i--] = '\0';
	while (n > 9)
	{
		map[i--] = (n % 10) + '0';
		n = n / 10;
	}
	if (n >= 0 && n <= 9)
		map[i] = n % 10 + '0';
	return (map);
}
