/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidanzhang <lidanzhang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 22:47:53 by lidanzhang        #+#    #+#             */
/*   Updated: 2022/10/30 22:51:48 by lidanzhang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		ch += 32;
	return (ch);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;

	c = 'm';
	printf("%c -> %c \n", c, ft_tolower(c));
	c = 'D';
	printf("%c -> %c \n", c, ft_tolower(c));
	return (0);
}
*/