/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidanzhang <lidanzhang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:22:37 by lidanzhang        #+#    #+#             */
/*   Updated: 2022/10/28 12:31:31 by lidanzhang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c);
int	ft_isalpha(int c);

int	ft_isalnum(int c)
{
	int	i;
	int	j;

	i = ft_isalpha(c);
	j = ft_isdigit(c);
	if (i == 1 || j == 1)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;
	int		result;

	c = '5';
	result = ft_isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'Q';
	result = ft_isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'l';
	result = ft_isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = '+';
	result = ft_isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);
	return (0);
}
*/
