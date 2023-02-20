/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:12:01 by ataira            #+#    #+#             */
/*   Updated: 2023/02/20 11:55:21 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		iscspdiux(char id);
int		cnt_digit(long n);
int		cnt_xdigit(unsigned long n);
int		ft_printf(const char *str, ...);
void	ft_putnbr_len(int n, int fd, char id);
void	convert(unsigned long surplus, int basenum, char *base, char id);
size_t	ft_putstr_len(char *s, int fd);
size_t	ft_putchar_fd_len(char c, int fd);
size_t	ft_putnbr_base(unsigned long nbr, char id);
size_t	ft_putnbr_xbase(unsigned long nbr, char id);
size_t	ft_putad_fd(void *p, char id);

#endif
