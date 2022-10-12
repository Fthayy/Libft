/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:55:03 by fay               #+#    #+#             */
/*   Updated: 2022/10/12 16:31:30 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return 0;
	while (i < n)
	{
		if (s1[i] - s2[i] > 0)
			return (1);
		else if (s1[i] - s2[i] < 0)
			return (-1);
		i++;
	}
	return (0);
}
