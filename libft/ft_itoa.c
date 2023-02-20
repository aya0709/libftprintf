/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 11:15:22 by ataira            #+#    #+#             */
/*   Updated: 2023/02/03 02:57:13 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cnt_digit(long n)
{
	int	digit;

	digit = 0;
	if (n < 0)
	{
		n *= -1;
		digit++;
	}
	while (n > 0)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

static char	*setstr(long digit, long lnb, long n)
{
	char	*str;

	str = ft_calloc(digit + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while (digit > 0)
	{
		str[digit - 1] = '0' + lnb % 10;
		lnb /= 10;
		digit--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	long	lnb;
	long	digit;
	char	*str;

	lnb = n;
	digit = 0;
	if (n == 0)
	{
		str = ft_calloc(2, sizeof(char));
		if (str == NULL)
			return (NULL);
		str[0] = '0';
		return (str);
	}
	if (n < 0)
		lnb = lnb * -1;
	digit = cnt_digit(n);
	str = setstr(digit, lnb, n);
	return (str);
}

// int	main(void)
// {
// 	int		n;
// 	char	*str;

// 	n = -1;
// 	str = ft_itoa(n);
// 	printf("%s", str);
// 	return (0);
// }
