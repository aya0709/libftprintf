/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 02:12:36 by ataira            #+#    #+#             */
/*   Updated: 2023/02/05 21:32:14 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	if (size <= len)
		len = size - 1;
	while (i < len)
	{
		*(dst + i) = *(src + i);
		i++;
	}
	*(dst + i) = '\0';
	return (ft_strlen(src));
}

// #include <string.h>
// int	main(void)
// {
// 	// char	dst_str[] = "abcd";
// 	// char	src_str[] = "xxxxxxxxx";
// 	char *s1 = "hello";
// 	char	*dst1;
// 	char	*dst2;

// 	dst1 = ft_calloc(10, sizeof(char));
// 	dst2 = ft_calloc(10, sizeof(char));

// 	for (size_t i = 0; i < strlen(s1); i++)
// 	{
// 		ft_strlcpy(dst1, s1, i);
// 		strlcpy(dst2, s1, i);
// 		printf("%s = %s\n", dst1, dst2);
// 	}
// 	free(dst1);
// 	free(dst2);
// 	return (0);
// }
