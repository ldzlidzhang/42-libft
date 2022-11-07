/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidanzhang <lidanzhang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:18:23 by lidanzhang        #+#    #+#             */
/*   Updated: 2022/10/28 17:48:32 by lidanzhang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n);

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, const char *src);

int	main(void)
{
	char	str[50];

	ft_strcpy(str, "This is string.h library function");
	printf("%s\n", str);
	ft_memset(str, 0, 7);
	printf("%s\n", str);
	ft_bzero(str, 7);
	printf("%s\n", str);
	return (0);
}
*/