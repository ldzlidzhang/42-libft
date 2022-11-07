/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidzhang <lidzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:11:57 by lidzhang          #+#    #+#             */
/*   Updated: 2022/10/31 14:14:22 by lidzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
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
	ret = ft_memcmp(str1, str2, 4);
	if (ret < 0)
		printf("str1 is less than str2");
	else if (ret > 0)
		printf("str2 is less than str1");
	else
		printf("str1 is equal to str2");
	return (0);
}
*/
