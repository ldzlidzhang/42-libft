/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidanzhang <lidanzhang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:46:33 by lidanzhang        #+#    #+#             */
/*   Updated: 2022/11/04 17:11:28 by lidanzhang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count_digit(long lnbr, int sign)
{
	unsigned int	digit;

	if (lnbr == 0)
		return (1);
	digit = 0;
	while (lnbr > 0)
	{
		lnbr /= 10;
		digit++;
	}
	if (sign == -1)
		digit++;
	return (digit);
}

static void	to_digit(char *dest, long lnbr, unsigned int digit, int sign)
{
	dest[digit] = '\0';
	dest[--digit] = lnbr % 10 + '0';
	lnbr /= 10;
	while (lnbr > 0)
	{
		dest[--digit] = lnbr % 10 + '0';
		lnbr /= 10;
	}
	if (sign == -1)
		dest[0] = '-';
}

char	*ft_itoa(int n)
{
	char			*dest;
	long			lnbr;
	unsigned int	digit;
	int				sign;

	sign = 1;
	if (n < 0)
	{
		lnbr = (long)n * -1;
		sign = -1;
	}
	else
		lnbr = n;
	digit = count_digit(lnbr, sign);
	dest = malloc(sizeof(char) * (digit + 1));
	if (!dest)
		return (NULL);
	to_digit(dest, lnbr, digit, sign);
	return (dest);
}

/*
int	main(void)
{
	int	number;

	printf("Enter a number: ");
	scanf("%d", &number);
	printf("You have entered: %s \n", ft_itoa(number));
	return (0);
}
*/
