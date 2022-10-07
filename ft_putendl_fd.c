/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:20:51 by fay               #+#    #+#             */
/*   Updated: 2022/10/07 16:26:13 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	x;

	x = 0;
	while (s[x] != '\0')
	{
		write(fd, &s[x], 1);
		x++;
	}
	write(fd, "\n", 1);
}
int	main(void)
{
	int		fd;
	char	a[] = "fatih";
	fd = open("fatih.txt", O_RDWR | O_CREAT);
	ft_putendl_fd(a, fd);
	ft_putendl_fd(a, fd);
}
