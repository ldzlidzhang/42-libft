/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidanzhang <lidanzhang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:36:11 by lidanzhang        #+#    #+#             */
/*   Updated: 2022/11/03 22:18:20 by lidanzhang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char a[20]="Program";
	char b[20]={'P','r','o','g','r','a','m','\0'};

	printf("Length of string a = %zu \n",strlen(a));
	printf("Length of string b = %zu \n",strlen(b));
	printf("Length of string a = %zu \n",ft_strlen(a));
	printf("Length of string b = %zu \n",ft_strlen(b));
	return (0);
}
*/