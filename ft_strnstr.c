/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:45:38 by fay               #+#    #+#             */
/*   Updated: 2022/10/12 17:59:06 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char    *ft_strnstr(char *str, char *to_find,size_t len)
{
    size_t    i;
    int    j;

    i = 0;
    j = 0;
    if (to_find[j] == '\0')
        return (str);
    while (str[i] != '\0')
    {
        while (str[i + j] == to_find[j] && str[i + j] != '\0' && i+j<len)
            j++;
        if (to_find[j] == '\0')
            return (str + i);
        i++;
        j = 0;
    }
    return (0);
}

