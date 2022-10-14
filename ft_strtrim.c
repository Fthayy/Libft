/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:35:22 by fay               #+#    #+#             */
/*   Updated: 2022/10/14 12:41:27 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
/*
int	ft_size(char const *s1, char const *set)
{
	int	x;
	int	y;
	int	a;

	a = 0;
	y = 0;
	x = 0;
	while (s1[x] != '\0')
	{
		while (set[y] != '\0')
		{
			if (s1[x] == set[y])
			{
				x++;
				y = 0;
			}
			y++;
		}
		y = 0;
		x++;
		a++;
	}
	return (a);
}

int	ft_bsort(char const *s1, char const *set, int x)
{
	int	y;

	y = 0;
	while (s1[x] != '\0')
	{
		while (set[y] != '\0')
		{
			if (s1[x] == set[y])
			{
				x++;
				y = 0;
				return (0);
			}
			y++;
		}
		return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		size;
	char	*s2;
	int		x;
	int		a;

	x = 0;
	a = 0;
	size = ft_size(s1, set);
	s2 = malloc(size * sizeof(char) + 1);
	while (s1[x] != '\0')
	{
		if (ft_bsort(s1, set, x) == 1)
		{
			s2[a] = s1[x];
			a++;
		}
		x++;
	}
	s2[a] = '\0';
	return (s2);
}*/

char    *ft_strtrim(char const *s1, char const *set)
{
    char *a;
    size_t len;
    while (*s1 && ft_strchr(set, *s1))
        s1++;
    len = ft_strlen(s1);
    while (ft_strchr(set, s1[len]) && len)
        len--;
    a = ft_substr((char *)s1, 0, len + 1);
    return (a);
}
