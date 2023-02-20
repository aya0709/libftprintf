/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 22:07:54 by ataira            #+#    #+#             */
/*   Updated: 2023/02/03 03:33:47 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ucdst;
	const unsigned char	*cucsrc;

	i = 0;
	ucdst = (unsigned char *)dst;
	cucsrc = (const unsigned char *)src;
	if (cucsrc == ucdst)
		return ((void *)dst);
	while (i < len)
	{
		*(ucdst + i) = *(cucsrc + i);
		i++;
	}
	return ((void *)ucdst);
}

// int	main(void)
// {
// 	char dst[] = "abcde";
// 	char src[] = "pqr";
// 	printf("%s", ft_memcpy(dst, src, 0));
// 	return (0);
// }
