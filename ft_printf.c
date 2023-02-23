/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:10:26 by ataira            #+#    #+#             */
/*   Updated: 2023/02/21 18:29:14 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr_base(unsigned long nbr, char id)
{
	int				basenum;
	unsigned long	surplus;
	size_t			len;
	char			*base;

	surplus = nbr;
	if (id != 'p')
		surplus = (unsigned int)nbr;
	len = cnt_xdigit(surplus);
	if (id == 'x' || id == 'p')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	basenum = ft_strlen(base);
	if (id == 'p')
	{
		write(STDOUT_FILENO, "0x", 2);
		len += 2;
	}
	convert(surplus, basenum, base, id);
	return (len);
}

size_t	ft_search_cspdiux_num(va_list args, char id)
{
	size_t			len;
	unsigned int	uin;
	int				in;

	uin = 0;
	in = 0;
	if (id == 'u')
	{
		uin = (unsigned int)va_arg(args, int);
		len = cnt_digit(uin);
		ft_putnbr_len(uin, STDOUT_FILENO, id);
	}
	else
	{
		in = (int)va_arg(args, int);
		len = cnt_digit(in);
		ft_putnbr_len(in, STDOUT_FILENO, id);
	}
	return (len);
}

size_t	ft_search_cspdiux(va_list args, char id)
{
	size_t	len;

	len = 0;
	if (id == 'd' || id == 'i' || id == 'u')
		len = ft_search_cspdiux_num(args, id);
	else if (id == 's')
		len = ft_putstr_len((char *)va_arg(args, const char *), STDOUT_FILENO);
	else if (id == 'c')
		len = ft_putchar_fd_len((char)va_arg(args, int), STDOUT_FILENO);
	else if (id == 'p')
		len = ft_putad_fd((void *)va_arg(args, void *), id);
	else if (id == 'x' || id == 'X')
		len = ft_putnbr_base((int)va_arg(args, int), id);
	else if (id == '%')
		len = write(STDOUT_FILENO, &id, 1);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && iscspdiux(str[i + 1]))
		{
			i++;
			len += ft_search_cspdiux(args, str[i]);
		}
		else if (str[i] != '%')
		{
			write(STDOUT_FILENO, &str[i], 1);
			len++;
		}
		i++;
	}
	va_end(args);
	return ((int)len);
}
