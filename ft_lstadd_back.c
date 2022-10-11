/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:19:18 by fay               #+#    #+#             */
/*   Updated: 2022/10/11 09:38:37 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// lst-next NULL ise oraya new koy
#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	 new = ft_lstlast(lst)->next;
	 new->next = NULL
}


