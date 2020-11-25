/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:49:04 by jobando-          #+#    #+#             */
/*   Updated: 2019/11/21 13:45:52 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char	*tmp;

	tmp = s;
	while (*tmp)
		tmp++;
	if (c == '\0')
		return ((char*)tmp);
	while (--tmp >= s)
		if (c == *tmp)
			return ((char*)tmp);
	return (0);
}
