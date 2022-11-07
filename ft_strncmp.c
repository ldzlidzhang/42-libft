/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidzhang <lidzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:32:23 by lidzhang          #+#    #+#             */
/*   Updated: 2022/10/31 11:16:10 by lidzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[15];
	char	str2[15];
	int		ret;

	strcpy(str1, "ABCDef");
	strcpy(str2, "ABCDEF");
	ret = ft_strncmp(str1, str2, 4);
	if (ret < 0)
		printf("str1 is less than str2");
	else if (ret > 0)
		printf("str2 is less than str1");
	else
		printf("str1 is equal to str2");
	return (0);
}
*/