/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:45:27 by fay               #+#    #+#             */
/*   Updated: 2022/10/07 17:45:31 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// verilen integer sayilari string halde return et

#include <stdio.h>
#include <stdlib.h>
char	*ft_putchar(char c, int x)
{
	char	*s1;
	int		size;

	size = 3;
	s1 = malloc(size * sizeof(char) + 1);
	if (size == x)
		return (s1);
}

void	ft_putnbr(int nb)
{
	int	a;

	a = 0;
	if (nb == -2147483648)
	{
		ft_putchar('-', a);
		ft_putchar('2', a);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-', a);
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48, a);
	a++;
}

char	*ft_itoa(int n)
{
	return ((char *)ft_putnbr(n));
}
