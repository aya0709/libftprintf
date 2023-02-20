/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 22:44:10 by ataira            #+#    #+#             */
/*   Updated: 2023/02/03 03:40:58 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ucdest;
	const unsigned char	*cucsrc;

	i = 0;
	ucdest = (unsigned char *)dest;
	cucsrc = (const unsigned char *)src;
	if (dest < src)
	{
		while (i < n)
		{
			*(ucdest + i) = *(cucsrc + i);
			i++;
		}
	}
	if (dest > src)
	{
		while (i < n)
		{
			*(ucdest + n - i - 1) = *(cucsrc + n - i - 1);
			i++;
		}
	}
	return ((void *)dest);
}

// #include <string.h>
// int	main(void)
// {
// 	char	dst_str[]  = "abcdefghijklmn";

// 	ft_memmove(dst_str+3, dst_str, 7);
//     //memmove(dst_str+7, dst_str, 10);
// 	printf("%s", dst_str);
// 	return (0);
// }
