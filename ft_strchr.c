/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:32:06 by fay               #+#    #+#             */
/*   Updated: 2022/10/04 17:58:54 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *str, int c)
{
	int	x;

	x = 0;

	while(str[x] != '\0' && str[x] != c)
	{
		x++;
	}
	return((char *)str+x);
}
#include <stdio.h>
int main()
{
	const char a[]="fatih";
	printf("%s",ft_strchr(a,'t'));
}
