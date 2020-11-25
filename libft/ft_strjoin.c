/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 13:41:26 by jobando-          #+#    #+#             */
/*   Updated: 2019/12/03 14:30:54 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	size_t	len;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	tab = (char *)malloc(len + 1);
	if (!tab)
		return (NULL);
	ft_strlcpy(tab, s1, (ft_strlen(s1) + 1));
	ft_strlcat(tab, s2, len + 1);
	return (tab);
}
