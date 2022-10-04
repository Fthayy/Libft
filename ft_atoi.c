/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:14:59 by fay               #+#    #+#             */
/*   Updated: 2022/10/04 17:28:16 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
	int	x;
	int	nb;
	int res;

	nb = 1;
	x = 0;
	res = 0;
	while ((str[x] >= 9 && str[x] <= 13) || str[x] == 32)
		x++;
	if (str[x] == '-')
	{
		nb=-nb;
		x++;
	}
	else if( str[x] == '+')
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		res = (str[x] - '0') + (res * 10);
		x++;
	}
	return (res*nb);
}	
#include <stdio.h>
int main()
{
	char a[] ="-244";
	printf("%d",ft_atoi(a));
}


