/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <fay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:22:32 by fay               #+#    #+#             */
/*   Updated: 2022/10/07 12:54:52 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *s1;
	int x;

	x = 0;
	s1 = malloc(len * sizeof(char) + 1);
	while (s[start] != '\0' && len != 0)
	{
		s1[x] = s[start];
		start++;
		len--;
		x++;
	}
	s1[x] = '\0';
	return (s1);
}