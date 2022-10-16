/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:18:03 by fay               #+#    #+#             */
/*   Updated: 2022/10/14 13:02:55 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*s1;
	size_t		x;

	c = (unsigned char)c;
	s1 = s;
	x = 0;
	while (x < n)
	{
		if (s1[x] == c)
			return ((void *)s1 + x);
		x++;
	}
	return (0);
}
