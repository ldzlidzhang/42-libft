/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidanzhang <lidanzhang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:41:53 by lidanzhang        #+#    #+#             */
/*   Updated: 2022/11/04 08:52:46 by lidanzhang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	i;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
	{
		dest = malloc(sizeof(char) * 1);
		if (dest == NULL)
			return (NULL);
		dest[0] = 0;
		return (dest);
	}
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while ((char)s[start] && (size_t)i < len)
	{
		dest[i] = (char)s[start];
		i++;
		start++;
	}
	dest[i] = 0;
	return (dest);
}

/*
int	main(void)
{
	char	src[] = "substr function Implementation";
	char	*dest;
	int		m = 7;
	int		n = 8;

	dest = ft_substr(src, m, n);
	printf("%s\n", src);
	printf("%s\n", dest);
	return (0);
}
*/