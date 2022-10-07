/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:52:53 by fay               #+#    #+#             */
/*   Updated: 2022/10/07 15:58:45 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<fcntl.h> 

void ft_putchar_fd(char c,int fd)
{
	write(fd,&c,1);
}

int main()
{
	int fd;
	fd = open ("fth.txt", O_RDWR | O_CREAT);
	ft_putchar_fd('b',fd);
}
