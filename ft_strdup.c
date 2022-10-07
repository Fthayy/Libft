/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:49:27 by fay               #+#    #+#             */
/*   Updated: 2022/10/07 12:06:41 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_strlen(const char *x)
{
	int	i;

	i = 0;
	while (x[i] != '\0')
		i++;
	return (i);
}
char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		x;
	int		slen;

	slen = ft_strlen(s1) + 1;
	x = 0;
	s2 = malloc(slen * sizeof(char));
	if (!s2)
		return (0);
	while (s1[x] != '\0')
	{
		s2[x] = s1[x];
		x++;
	}
	s2[x] = '\0';
	return (s2);
}
