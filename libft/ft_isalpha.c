/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 02:59:24 by ataira            #+#    #+#             */
/*   Updated: 2023/01/11 06:39:27 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((('a' <= c && c <= 'z')) || (('A' <= c && c <= 'Z')));
}

// int	main(void)
// {
// 	printf("%d", ft_isalpha('a'));
// 	return (0);
// }
