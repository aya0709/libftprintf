/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 06:23:01 by ataira            #+#    #+#             */
/*   Updated: 2023/02/03 03:40:09 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	size_t			i;
	unsigned char	*ucbuf;
	unsigned char	ucch;

	i = 0;
	ucbuf = (unsigned char *)buf;
	ucch = (unsigned char)ch;
	while (i < n)
	{
		if ((ucbuf)[i] == ucch)
		{
			return ((void *)&(ucbuf)[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s", ft_memchr("abc\0dea", 'd', 100));
// 	return (0);
// }
