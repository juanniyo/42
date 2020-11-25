/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 10:46:05 by jobando-          #+#    #+#             */
/*   Updated: 2019/11/21 13:54:56 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t n;
	size_t j;

	n = 0;
	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	while (haystack[n] != '\0' && n < len)
	{
		j = 0;
		while (needle[j] == haystack[n + j] && ((n + j) < len))
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + n);
			j++;
		}
		n++;
	}
	return (NULL);
}
