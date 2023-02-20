/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 07:00:42 by ataira            #+#    #+#             */
/*   Updated: 2023/02/03 03:39:17 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t size)
{
	size_t			i;
	unsigned char	*ucs;

	i = 0;
	ucs = (unsigned char *)s;
	while (i != size)
	{
		*(ucs + i) = (char)c;
		i++;
	}
	return ((void *)s);
}

// int	main(void)
// {
// 	char	str[] = "abcdef";
// 	printf("%s", ft_memset(str, 'p', 2));
// 	return (0);
// }
