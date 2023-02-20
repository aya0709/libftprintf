/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 03:44:55 by ataira            #+#    #+#             */
/*   Updated: 2023/01/31 01:10:33 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;

	if (dstsize == 0 && dst == NULL)
		return (ft_strlen(src));
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst < dstsize)
	{
		ft_strlcpy(dst + len_dst, src, dstsize - len_dst);
		return (len_src + len_dst);
	}
	else
	{
		return (len_src + dstsize);
	}
}

// #include <string.h>
// int	main(void)
// {
// 	char *dst1 = calloc(100, sizeof(char));
// 	char *dst2 = calloc(100, sizeof(char));
// 	char *src1 = calloc(100, sizeof(char));
// 	char *src2 = calloc(100, sizeof(char));
// 	for (int i = 0; i < 99; i++)
// 	{
// 		src1[i] = i + 1;
// 		src2[i] = i + 1;
// 	}
// 	ft_strlcat(dst1, "", 100);
// 	strlcat(dst2, "", 100);
// 	printf("%zu=%zu\n%s=%s\n",strlcat(dst1, "hello", 100), ft_strlcat(dst2,
				// "hello", 100),dst1, dst2);
// 	printf("%zu=%zu\n%s=%s\n",strlcat(dst1, src1, 0), ft_strlcat(dst2, src2,
				// 0),dst1, dst2);
// 	//printf("%zu=%zu\n%s=%s",strlcat(dst1, src1, 10), ft_strlcat(dst2, src2,
				// 10),dst1, dst2);
// 	free(dst1);
// 	free(dst2);
// 	free(src1);
// 	free(src2);
// 	return (0);
// }
