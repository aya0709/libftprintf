/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 04:43:53 by ataira            #+#    #+#             */
/*   Updated: 2023/02/03 03:43:36 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	size_t			len;
	unsigned char	*ucs;

	i = 0;
	len = ft_strlen(s);
	ucs = (unsigned char *)s;
	while (i <= len)
	{
		if (ucs[i] == (char)c)
		{
			return ((char *)&ucs[i]);
		}
		i++;
	}
	return (NULL);
}

// #include<string.h>
// int	main(void)
// {
// 	printf("%s=%s", ft_strchr("abcded", '\0'), strchr("abcded",'\0'));
// 	return (0);
// }
