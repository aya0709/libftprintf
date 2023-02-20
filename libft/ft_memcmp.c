/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 04:52:36 by ataira            #+#    #+#             */
/*   Updated: 2023/02/03 03:40:36 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	size_t			i;
	unsigned char	*buf1_tmp;
	unsigned char	*buf2_tmp;

	i = 0;
	buf1_tmp = (unsigned char *)buf1;
	buf2_tmp = (unsigned char *)buf2;
	while (i != n)
	{
		if (buf1_tmp[i] != buf2_tmp[i])
		{
			return ((int)(buf1_tmp[i] - buf2_tmp[i]));
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
//     char	buf1[] = "\0abc\0de";
// 	char	buf2[] = "\0abc\0de";
// 	char	buf3[] = "\0abcdef";

//     printf("%d \n",ft_memcmp(buf1, buf2,7));
//     printf("%d",ft_memcmp(buf1, buf3,7));
// 	return (0);
// }
