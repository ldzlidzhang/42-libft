/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidanzhang <lidanzhang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 23:39:40 by lidanzhang        #+#    #+#             */
/*   Updated: 2022/11/03 23:33:52 by lidanzhang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*s_alloc;

	len = ft_strlen(s) + 1;
	s_alloc = (char *)malloc(len * sizeof(char));
	if (s_alloc == NULL)
		return (NULL);
	ft_memcpy(s_alloc, s, len);
	return (s_alloc);
}

/*
int	main(void)
{
	char	*str = "Helloworld";
	char	*result;

	result = ft_strdup(str);
	printf("The string : %s\n", result);
	return (0);
}
*/