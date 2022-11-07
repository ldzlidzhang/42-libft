/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidanzhang <lidanzhang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:52:02 by lidanzhang        #+#    #+#             */
/*   Updated: 2022/11/05 21:16:59 by lidanzhang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char	*pt_src;
	unsigned char		*pt_dest;
	size_t				i;

	pt_dest = (unsigned char *)dest;
	pt_src = (unsigned char *)src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		*((char *)dest + i) = *((char *)pt_src + i);
		i++;
	}
	return (pt_dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	src[50] = "hello world";
	char		dest[50];

	strcpy(dest, "Heloooooo!!");
	printf("Before memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, strlen(src) + 1);
	printf("After memcpy dest = %s\n", dest);
	return (0);
}
*/

/*
memcpy is copying a memory block, that can consist of any data.
strcpy and strncpy does only copy strings that end with a zero.
So you need to have the size as a parameter with memcpy, but not with strcpy.
strncpy is a strcpy, just that you can’t accidentally overwrite your destination
block size, there is a safeguard size.
*/
