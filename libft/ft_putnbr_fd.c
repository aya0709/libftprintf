/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 00:31:17 by ataira            #+#    #+#             */
/*   Updated: 2023/01/31 01:01:58 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	lnb;
	char	c;

	lnb = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		lnb = lnb * -1;
	}
	c = '0' + lnb % 10;
	if (lnb < 10)
	{
		write(fd, &c, 1);
		return ;
	}
	lnb /= 10;
	ft_putnbr_fd(lnb, fd);
	write(fd, &c, 1);
	return ;
}

// int	main(void)
// {
// 	int	fd;

// 	fd = 1;
// 	ft_putnbr_fd(1, fd);
// 	return (0);
// }
