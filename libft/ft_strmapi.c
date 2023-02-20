/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:35:34 by ataira            #+#    #+#             */
/*   Updated: 2023/02/05 00:55:58 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

// char	f(unsigned int n, char c)
// {
// 	if (n < 1)
// 		return (c);
// 	c = ft_toupper((int)(c));
// 	return (c);
// }

// int	main(void)
// {
// 	char	*str;

// 	str = "abcd";
// 	printf("%s", ft_strmapi(str, f));
// 	return (0);
// }
