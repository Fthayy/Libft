/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:27:25 by fay               #+#    #+#             */
/*   Updated: 2022/10/04 16:31:23 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *s1;
	const char *s2;
	unsigned long x;

	x = 0;
	s1 = dst;
	s2 = src;
	while ( s2[x] != '\0' && x < len)
	{
		s1[x] = s2[x];
		x++;
	}
	s1[x] = '\0';
	return (s1);
}

#include <stdio.h>
#include <string.h>

int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
