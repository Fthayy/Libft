/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:40:11 by fay               #+#    #+#             */
/*   Updated: 2022/10/11 10:08:55 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int x;
	unsigned int  len;

	len = ft_strlen(s);
	while ( len != 0)
	{
		if (s[len] == c)
			return((char *)s+len);
		len--;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main( void )
{
    const char cdizi[] = "Bilgisayar";
    char cd = 'i';
    char *ret;

    ret = ft_strrchr(cdizi, cd);

    printf("Bulunan son %c karakterinden itibaren dizi içeriği: %s", cd, ret);

    return 0;
}
