/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:35:22 by fay               #+#    #+#             */
/*   Updated: 2022/10/07 17:09:04 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
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
	return (s2);
}

int	main(void)
{
	char const a[] = "fatih ay";
	char const b[] = "askh";
	printf("%s", ft_strtrim(a, b));
}