/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidanzhang <lidanzhang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:50:45 by lidanzhang        #+#    #+#             */
/*   Updated: 2022/11/02 17:25:16 by lidanzhang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	if (!content)
		new->content = NULL;
	else
		new->content = content;
	new->next = NULL;
	return (new);
}
/*
static void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int	main(void)
{
	t_list		*elem;	
	char	str[] = "abc";

	if (!(elem = ft_lstnew(str)))
	{
		write(1, "\n1\n", 3);
		ft_print_result("NULL");
	}
	else
	{
		if (!(elem->content))
		{
			write(1, "\n2\n", 3);
			ft_print_result("NULL");
		}
		else
		{
			write(1, "\n3\n", 3);
			ft_print_result(elem->content);
		}
		if (!(elem->next))
		{
			write(1, "\n4\n", 3);
			ft_print_result("NULL");
		}
	}
	return (0);
}
*/