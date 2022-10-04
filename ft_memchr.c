/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:18:03 by fay               #+#    #+#             */
/*   Updated: 2022/10/04 18:34:58 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memchr(const void *ptr, int c)
{
	const char	*s1;
	int	x;

	s1 = ptr;
	x = 0;
	while ( s1[x] != '\0')
	{
		if (s1[x] == c)
			return ((void *)s1+x);
		x++;
	}
	return 0;
}


#include <stdio.h>
#include <string.h>

int main( void )
{
    const char *cp = "Bilgisayar";
    const char cd = 'g';

    printf("%c karakterinin bellek adresi: %p\n", cd, memchr(cp, cd, strlen(cp)));

    return 0;
}
