/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidanzhang <lidanzhang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 22:36:35 by lidanzhang        #+#    #+#             */
/*   Updated: 2022/10/30 22:47:00 by lidanzhang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		ch -= 32;
	return (ch);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;

	c = 'm';
	printf("%c -> %c \n", c, ft_toupper(c));
	c = 'D';
	printf("%c -> %c \n", c, ft_toupper(c));
	return (0);
}
*/