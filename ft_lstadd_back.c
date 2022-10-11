/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:19:18 by fay               #+#    #+#             */
/*   Updated: 2022/10/11 12:45:45 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// lst-next NULL ise oraya new koy
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL && lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
void ft_lstadd_back(t_list **lst, t_list *new)
{
	if ( *lst == NULL)
		new = *lst;
	 ft_lstlast(*lst)->next = new;
	 new->next = NULL;
}


