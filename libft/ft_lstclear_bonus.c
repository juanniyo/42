/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 12:38:51 by jobando-          #+#    #+#             */
/*   Updated: 2020/01/20 12:48:24 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;
	t_list	*count;

	count = *lst;
	if (count)
	{
		while (count->next)
		{
			count = *lst;
			del(count->content);
			next = count->next;
			free(count);
			*lst = NULL;
			*lst = next;
		}
	}
}
