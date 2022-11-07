/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidanzhang <lidanzhang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:39:16 by lidzhang          #+#    #+#             */
/*   Updated: 2022/11/03 23:24:49 by lidanzhang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	i = -1;
	while (++i < len && *(haystack + i))
	{
		j = -1;
		while ((i + ++j) < len && *(haystack + i + j) == *(needle + j))
			if (!*(needle + j + 1))
				return ((char *)(haystack + i));
	}
	return (NULL);
}

/*
int	main(void)
{
	char	*str = "What you would like today ?";
	char	*pattern_1 = "would";
	char	*pattern_2 = "today";
	char	*returnstr;

	returnstr = ft_strnstr(str, pattern_1, 17);
	printf("The ft_strnstr output for fot first pattern = %s\n",returnstr);
	returnstr = ft_strnstr(str, pattern_2, 17);
	printf("The ft_strnstr output for for second pattern = %s\n",returnstr);
}

The strnstr() function locates the first occurrence of the null-termi-
nated string s2 in the string s1, where not more than n characters are
searched.  Characters that appear after a `\0' character are not
searched.
*/