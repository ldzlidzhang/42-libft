/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidanzhang <lidanzhang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:57:58 by lidanzhang        #+#    #+#             */
/*   Updated: 2022/11/06 23:18:47 by lidanzhang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*
int main(void)
{
	char *s = "have a nice day !";
	int	fd;
	
	fd = 0;
	while (fd < 5)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
		fd++;
	}
	return (0);
}
*/
