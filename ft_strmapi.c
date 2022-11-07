/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidanzhang <lidanzhang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:07:49 by lidanzhang        #+#    #+#             */
/*   Updated: 2022/11/04 17:33:07 by lidanzhang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dest;

	dest = ft_strdup(s);
	if (!s || !f || !dest)
		return (0);
	i = 0;
	while (dest[i])
	{
		dest[i] = f(i, dest[i]);
		i++;
	}
	return (dest);
}

/*
char	ft_add(unsigned int n, char ch)
{
	char	str;

	str = ch + n;
	return (str);
}

int	main(void)
{
	char	str1[] = "abc";
	char	*str2;

	str2 = ft_strmapi(str1, *ft_add);
	printf("%s\n", str2);
	return (0);
}
*/
