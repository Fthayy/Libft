/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:30:08 by fay               #+#    #+#             */
/*   Updated: 2022/10/11 12:05:24 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		x;
	unsigned int		slen;
	char	*str;
	if (!s || !f)
		return (0);
	slen = ft_strlen(s);
	x = 0;
	if (!slen)
		return (0);
	str = malloc(slen * sizeof(char) + 1);
	while (x < slen)
	{
		str[x] = f(x, s[x]);
		x++;
	}
	str[x] = '\0';
	return (str);
}
