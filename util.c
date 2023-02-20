/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:59:53 by ataira            #+#    #+#             */
/*   Updated: 2023/02/20 12:02:08 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	iscspdiux(char id)
{
	if (id == 'd' || id == 'i' || id == 'u' || id == 'c' || id == 's'
		|| id == 'p' || id == 'x' || id == 'X' || id == '%')
		return (1);
	return (0);
}

size_t	ft_putchar_fd_len(char c, int fd)
{
	write(fd, &c, 1);
	return ((size_t)1);
}

size_t	ft_putstr_len(char *s, int fd)
{
	size_t	len;

	if (s == NULL)
	{
		return (write(fd, "(null)", 6));
		return (0);
	}
	len = ft_strlen(s);
	return (write(fd, s, len));
}

void	convert(unsigned long surplus, int basenum, char *base, char id)
{
	int	index;

	if (surplus < (unsigned long)basenum)
		write(1, &base[surplus], 1);
	else
	{
		index = surplus % basenum;
		surplus /= basenum;
		convert(surplus, basenum, base, id);
		write(1, &base[index], 1);
	}
}

size_t	ft_putad_fd(void *p, char id)
{
	unsigned long	ap;
	size_t			len;

	ap = (unsigned long)p;
	len = ft_putnbr_base(ap, id) + 2;
	return (len);
}
