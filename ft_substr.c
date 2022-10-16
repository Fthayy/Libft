/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <fay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:22:32 by fay               #+#    #+#             */
/*   Updated: 2022/10/14 16:26:53 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	int		x;
	size_t	t;

	t = ft_strlen(s);
	x = 0;
	if (start < t)
	{
		s1 = (char *)malloc((t - start) * sizeof(char) + 1);
		while (s[start] != '\0' && len > 0)
		{
			s1[x] = s[start];
			start++;
			len--;
			x++;
		}
	}
	else
		s1 = malloc(1);
	s1[x] = '\0';
	return (s1);
}
