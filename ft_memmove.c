/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <fay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:27:25 by fay               #+#    #+#             */
/*   Updated: 2022/10/16 15:01:30 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*s1;
	const char		*s2;
	unsigned long	i;
	size_t			a;

	a = len;
	i = 0;
	s1 = dst;
	s2 = src;
	if (!s1 || !s2)
		return (0);
	if (s1 > s2)
		while (len-- > 0)
			s1[len] = s2[len];
	else
		while (i < len)
		{
			s1[i] = s2[i];
			i++;
		}
	return (dst);
}
