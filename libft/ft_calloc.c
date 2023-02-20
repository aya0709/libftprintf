/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 06:05:24 by ataira            #+#    #+#             */
/*   Updated: 2023/02/03 04:13:55 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*str;

	if (n == 0 || size == 0)
	{
		str = malloc(1);
		if (str == NULL)
			return (NULL);
		ft_memset(str, '\0', 1);
		return (str);
	}
	if (SIZE_MAX / n < size)
		return (NULL);
	str = malloc(size * n);
	if (str == NULL)
		return (NULL);
	ft_memset(str, '\0', size * n);
	return (str);
}

// #include<malloc/malloc.h>
// int	main(void)
// {
// 	int	i = 0;

// 	int *ptr, *p, *ptr_;
// 	/* 500個のintサイズのメモリを確保 */
// 	ptr = (int *)ft_calloc(42, 1);
// 	ptr_ = (int *)calloc(42, 1);
// 	printf("%zu=%zu\n", malloc_size(ptr_), malloc_size(ptr));
// 	if (ptr == NULL)
// 	{
// 		printf("メモリが確保できません\n");
// 		exit(EXIT_FAILURE);
// 	}
// 	p = ptr;
// 	if(ptr[i] == '\0'){
// 		for (i = 0; i < 42; i++)
// 		{
// 			*p = i;
// 			printf("%d ", *p);
// 			p++;
// 		}
// 	}
// 	/* メモリの開放 */
// 	free(ptr);
// 	return (0);
// }
