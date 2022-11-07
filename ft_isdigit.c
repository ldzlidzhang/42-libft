/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidanzhang <lidanzhang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:05:04 by lidanzhang        #+#    #+#             */
/*   Updated: 2022/10/28 12:20:25 by lidanzhang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	char	c;

	c = '5';
	printf("\nResult when numeric numeric is passed: %d", isdigit(c));
	printf("\nResult when numeric numeric is passed: %d", ft_isdigit(c));
	c = '+';
	printf("\nResult when numeric non-numeric is passed: %d", isdigit(c));
	printf("\nResult when numeric non-numeric is passed: %d", ft_isdigit(c));
	return (0);
}
*/