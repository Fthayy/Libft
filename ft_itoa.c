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

#include <stdlib.h>

int ft_strlen(int x)
{
  int a;
  
  a = 0;
  if ( x < 0)
  {
    a++;
    x = -x;
  }
  while (x > 0)
  {
    x = x / 10;
    a++;
  }
  return (a);
}

char    *ft_itoa(int n)
{
    int size;
    char *s;
    int x;
    
    x = n;
    if (n < 0)
      n = -n;
    size = ft_strlen(x);
    s = malloc(size*sizeof(char)+1);
    s[size--] = '\0';
    while (n > 9)
    {
        s[size] = n % 10 + '0';
        n = n / 10;
        size--;
    }
    if (n <= 9)
        s[size--] = n % 10 + '0';
    if (x < 0)
      s[size--] = '-';
    return (s);
}


#include <stdio.h>
int main()
{
    int x =-425364;
    printf("%s",ft_itoa(x));
}