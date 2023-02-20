/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 05:23:34 by ataira            #+#    #+#             */
/*   Updated: 2023/01/15 08:47:05 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*u_s1;
	unsigned char	*u_s2;

	i = 0;
	u_s1 = (unsigned char *)s1;
	u_s2 = (unsigned char *)s2;
	while (i != n)
	{
		if (u_s1[i] != '\0' && u_s2[i] != '\0')
		{
			if (u_s1[i] != u_s2[i])
				return (u_s1[i] - u_s2[i]);
		}
		else
		{
			return (u_s1[i] - u_s2[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str[]= "ABC";

//     printf("ABC: ABD   = %d\n", ft_strncmp(str, "ABD", 2));
//     printf("ABC: ABC   = %d\n", ft_strncmp(str, "ABC", 2));
//     printf("ABC: AAA   = %d\n", ft_strncmp(str, "AAA", 2));
//     printf("ABC: ABCD  = %d\n", ft_strncmp(str, "ABCD", 2));
//     printf("ABC: AB    = %d\n", ft_strncmp(str, "AB", 2));
//     printf("ABC: B     = %d\n", ft_strncmp(str, "B", 2));
//     printf("ABC: A     = %d\n", ft_strncmp(str, "A", 2));
// 	return (0);
// }
