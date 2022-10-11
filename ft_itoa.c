/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:45:27 by fay               #+#    #+#             */
/*   Updated: 2022/10/11 15:26:09 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(int x)
{
  int a;

  a = 0;
  if ( x <= 0)
  {
    a++;
    if ( x == -2147483648)
        x -= 1;
    x = -x;
  }
  while (x > 0)
  {
    x = x / 10;
    a++;
  }
  return (a);
}

char *ft_fth()
{
  int x;
  char *s;
  x = 0;
  s = malloc(12*sizeof(char));
  char *t = "-2147483648";
  while ( x < 12)
  {
    s[x] = t[x];
    x++;
  }
  return (s);
}

char  *ft_pof(int size, int n,char *s)
{
  if (n >= 0)
  {
    while (size >= 0)
    {
        s[size] = n % 10 + '0';
        n = n / 10;
        size--;
    }
}
    if (n < 0)
    {
      n = -n;
      while (size > 0)
    {
        s[size] = n % 10 + '0';
        n = n / 10;
        size--;
    }
      s[0] = '-';
  }
  return (s);
}

char    *ft_itoa(int n)
{
    int size;
    char *s;
    int x;

    x = n;
    if (n == -2147483648)
      s = ft_fth();
    else
    {
      if (n < 0)
        n = -n;
      size = ft_strlen(x);
      s = malloc(size*sizeof(char)+1);
      s[size--] = '\0';
	  if ( n >= 0)
		  s = ft_pof(size,x,s);
    }
return (s);
}
