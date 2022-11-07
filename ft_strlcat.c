/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidanzhang <lidanzhang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:03:48 by lidanzhang        #+#    #+#             */
/*   Updated: 2022/11/03 23:13:08 by lidanzhang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	char	*pt_src;

	pt_src = (char *)src;
	i = 0;
	while (i < size && *dst)
	{
		dst++;
		i++;
	}
	if (i == size)
		return (i + ft_strlen(src));
	j = 0;
	while (pt_src[j])
	{
		if (j < size - i - 1)
			*dst++ = pt_src[j];
		j++;
	}
	*dst = 0;
	return (j + i);
}

/*
	The strlcpy() and strlcat() functions copy and concatenate strings
respectively.  They are designed to be safer, more consistent, and less
error prone replacements for strncpy(3) and strncat(3).  Unlike those
functions, strlcpy() and strlcat() take the full size of the buffer (not
just the length) and guarantee to NUL-terminate the result (as long as
size is larger than 0 or, in the case of strlcat(), as long as there is
at least one byte free in dst).  Note that you should include a byte for
the NUL in size.  Also note that strlcpy() and strlcat() only operate on
true ``C'' strings.  This means that for strlcpy() src must be NUL-termi-
nated and for strlcat() both src and dst must be NUL-terminated.
The strlcat() function appends the NUL-terminated string src to the end
of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi
nating the result. 
The value returned (33) is equal to the size of both original strings, 
first and last. It’s the strlen() value, not the strings’ size in 
memory, which would include two more bytes for the two null characters 
at the end of each string.
*/

/*
int	main(void)
{
	char	first[] = "This is ";
	char	last[] = "a potentially long string";
	int		n;
	int		size = 16;
	char	buffer[size];

	ft_strcpy(buffer, first);
	n = strlcat(buffer, last, size);
	printf("Output: %s\n", buffer);
	printf("Value returned: %d\n", n);
	return (0);
}
*/