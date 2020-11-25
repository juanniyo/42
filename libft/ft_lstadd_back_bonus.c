/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobando- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 16:14:43 by jobando-          #+#    #+#             */
/*   Updated: 2020/01/18 16:58:56 by jobando-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*new_nodo;

	if (!lst)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		new_nodo = ft_lstlast(*lst);
		new_nodo->next = new;
	}
}
