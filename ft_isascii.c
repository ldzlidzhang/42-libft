/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidanzhang <lidanzhang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:39:33 by lidanzhang        #+#    #+#             */
/*   Updated: 2022/10/28 12:58:00 by lidanzhang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	for (c = 0x7c; c <= 0x82; c++)
	{
		printf("%#04x    ", c);
		if (isascii(c))
			printf("The character is %c\n", c);
		else
			printf("Cannot be represented by an ASCII character\n");
	}
	return (0);
}
*/
