/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidzhang <lidzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:53:11 by lidanzhang        #+#    #+#             */
/*   Updated: 2022/11/03 16:39:00 by lidzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (str);
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
	memset(str, '$', 7);
	printf("%s\n", str);
	return (0);
}
*/
