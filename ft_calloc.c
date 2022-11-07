/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidanzhang <lidanzhang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 22:11:51 by lidanzhang        #+#    #+#             */
/*   Updated: 2022/11/03 23:29:11 by lidanzhang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The C library function void *calloc(size_t nitems, size_t size) allocates 
the requested memory and returns a pointer to it. The difference in 
malloc and calloc is that malloc does not set the memory to zero 
where as calloc sets allocated memory to zero.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);

void	*ft_calloc(size_t count, size_t size)
{
	void	*pt;

	pt = (void *)malloc(count * size);
	if (!pt)
		return (NULL);
	ft_bzero(pt, (count * size));
	return (pt);
}

/* calloc
int	main(void)
{
	int	i;
	int	n;
	int	*a;

	printf("Number of elements to be entered:");
	scanf("%d", &n);
	a = (int *)ft_calloc(n, sizeof(int));
	printf("Enter %d numbers:\n", n);
	i = 0;
	while (i < n)
	{
		scanf("%d", &a[i]);
		i++;
	}
	printf("The numbers entered are: ");
	i = 0;
	while (i < n)
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("\n");
	free(a);
	return (0);
}
*/
/* malloc 
int	main(void)
{
	char	*str;

	str = (char *) malloc(15);
	strcpy(str, "tutorialspoint");
	printf("String = %s,  Address = %p\n", str, str);
	str = (char *) realloc(str, 25);
	strcat(str, ".com");
	printf("String = %s,  Address = %p\n", str, str);
	free(str);
	return (0);
}
*/
