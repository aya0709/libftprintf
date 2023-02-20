/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 05:17:42 by ataira            #+#    #+#             */
/*   Updated: 2023/01/31 01:14:03 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[len - i] == (char)c)
		{
			return ((char *)&s[len - i]);
		}
		i++;
	}
	return (NULL);
}

// #include<string.h>
// int	main(void)
// {
// 	printf("%s=%s", ft_strrchr("libft-test-tokyo", 'l'+256),
			// strrchr("libft-test-tokyo", 'l'+256));
// 	return (0);
// }
