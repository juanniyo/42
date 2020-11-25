/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 19:28:34 by jobando-          #+#    #+#             */
/*   Updated: 2019/12/09 20:55:43 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*newtab;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]) != 0)
		i++;
	j = ft_strlen(s1) - 1;
	if (i >= j)
		return (ft_strdup(""));
	while (s1[j] && ft_strchr(set, s1[j]) != 0)
		j--;
	newtab = ft_substr(s1, i, (j - i + 1));
	return (newtab);
}
