/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidanzhang <lidanzhang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:14:43 by lidanzhang        #+#    #+#             */
/*   Updated: 2022/10/28 12:21:39 by lidanzhang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;

	c = 'Q';
	printf("\nWhen uppercase alphabet is passed: %d", ft_isalpha(c));
	printf("\nWhen uppercase alphabet is passed: %d", isalpha(c));
	c = 'q';
	printf("\nWhen lowercase alphabet is passed: %d", ft_isalpha(c));
	printf("\nWhen lowercase alphabet is passed: %d", isalpha(c));
	c = '+';
	printf("\nWhen non-alphabetic character is passed: %d", ft_isalpha(c));
	printf("\nWhen non-alphabetic character is passed: %d", isalpha(c));
	return (0);
}
*/