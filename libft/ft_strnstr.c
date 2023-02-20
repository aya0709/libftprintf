/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 05:46:43 by ataira            #+#    #+#             */
/*   Updated: 2023/02/03 03:00:11 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isendfunc(const char *haystack, const char *needle, size_t len)
{
	if (haystack == NULL)
		return (0);
	if (ft_strlen(needle) == 0)
		return (1);
	if (ft_strlen(haystack) == 0)
		return (0);
	if (ft_strlen(needle) > len)
		return (0);
	return (2);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h_cnt;

	h_cnt = 0;
	if (isendfunc(haystack, needle, len) == 1)
		return ((char *)haystack);
	else if (isendfunc(haystack, needle, len) == 0)
		return (NULL);
	while (h_cnt <= len - ft_strlen(needle))
	{
		if (ft_strncmp(haystack + h_cnt, needle, ft_strlen(needle)) == 0)
			return ((char *)(haystack + h_cnt));
		h_cnt++;
	}
	return (NULL);
}

// #include <string.h>
// int	main(void)
// {
// 	char	*haystack;
// 	int 	len;
// 	haystack = "libft-test-tokyo";
// 	len = ft_strlen(haystack);
// 	for (int i = 0; i <len; i++)
// 	{
// 		printf("%d %s=%s\n", i, ft_strnstr(haystack,
// "",i),strnstr(haystack,"",i));
// 		printf("%d %s=%s\n", i,ft_strnstr(haystack,"libft-test-tokyo",
// i),strnstr(haystack,"libft-test-tokyo",i));
// 		printf("%d %s=%s\n", i,
// ft_strnstr(haystack,"libft",i),strnstr(haystack,"libft", i));
// 		printf("%d %s=%s\n", i,
// ft_strnstr(haystack,"test",i),strnstr(haystack,"test", i));
// 		printf("%d %s=%s\n", i,
// ft_strnstr(haystack,"tokyo",i),strnstr(haystack,"tokyo", i));
// 		printf("%d %s=%s\n", i,ft_strnstr(haystack,"libft~",i),strnstr(haystack,
// "libft~", i));
// 		printf("%d %s=%s\n", i, ft_strnstr(haystack,"z",i),strnstr(haystack,"z",
// i));
// 	}
// 	printf("%s\n", ft_strnstr(NULL, "1", 0));
// 	return (0);
// }
