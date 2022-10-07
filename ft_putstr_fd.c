/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:04:08 by fay               #+#    #+#             */
/*   Updated: 2022/10/07 16:04:10 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	x;

	x = 0;
	while (s[x] != '\0')
	{
		write(fd, &s[x], 1);
		x++;
	}
}
int	main(void)
{
	int fd;
	fd = open("fatih.txt", O_RDWR | O_CREAT);
	char a[] = "kkk";
	ft_putstr_fd(a, fd);
}