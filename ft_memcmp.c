/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:42:22 by fay               #+#    #+#             */
/*   Updated: 2022/10/04 19:06:20 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, int n)
{
	int	x;
	const char	*str1;
	const char	*str2;
	
	str1 = s1;
	x = 0;
	str2 = s2;
	while (str1[x] != '\0' && str2[x] != '\0' && str1[x] == str2[x])
		x++;
	return (str1[x] - str2[x]);
}

#include <stdio.h>
#include <string.h>

int main( void )
{
    const char *cp1 = "Bilgisayar";
    const char *cp2 = "Bilgil";
    int ret;

    ret = ft_memcmp(cp1, cp2, 10);

    if(ret<0) printf("cp1 bellek içeriği cp2 bellek içeriğinden küçüktür!");
    else if(ret>0) printf("cp2 bellek içeriği cp1 bellek içeriğinden küçüktür!");
    else printf("cp1 bellek içeriği cp2 bellek içeriğine eşittir!");

    return 0;
}

