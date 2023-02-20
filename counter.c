/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:26:31 by ataira            #+#    #+#             */
/*   Updated: 2023/02/20 12:02:18 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	cnt_digit(long n)
{
	int	digit;

	digit = 0;
	if (n <= 0)
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

int	cnt_xdigit(unsigned long n)
{
	int	digit;

	digit = 0;
	if (n == 0)
	{
		digit = 1;
		return (digit);
	}
	while (n > 0)
	{
		n /= 16;
		digit++;
	}
	return (digit);
}

void	ft_putnbr_len(int n, int fd, char id)
{
	long	lnb;
	char	c;

	lnb = n;
	if (id == 'u')
		lnb = (unsigned int)n;
	if (lnb < 0)
	{
		write(fd, "-", 1);
		lnb *= -1;
	}
	c = '0' + lnb % 10;
	if (lnb < 10)
	{
		write(fd, &c, 1);
		return ;
	}
	lnb /= 10;
	ft_putnbr_len(lnb, fd, id);
	write(fd, &c, 1);
	return ;
}
