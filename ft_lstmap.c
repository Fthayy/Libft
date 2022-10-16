/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:17:26 by fay               #+#    #+#             */
/*   Updated: 2022/10/16 17:43:34 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	int slen;
	t_list *new;
	slen = ft_strlen((char *)lst);
	new = malloc(slen * sizeof(t_list));
	if (!new)
		ft_lstclear(*&new,del);
		return (NULL);
	while (lst != NULL)
	{
		new = (*f)(lst->content);
		new = new->next;	
		lst = lst->next;
	}
	new = NULL;
	return(new);
}
