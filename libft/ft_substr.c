/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:02:16 by ataira            #+#    #+#             */
/*   Updated: 2023/02/04 01:12:41 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
		start = ft_strlen(s);
	slen = ft_strlen(s) - start;
	if (slen < len)
		len = slen;
	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*s;

// 	s = "libft-test-tokyo";
// 	str = ft_substr(s, 10, 5);
// 	printf("%s\n", str);
// 	// char *str = ft_strdup("1");
// 	// char *str_ =ft_strdup("1");
// 	// str = ft_substr(str, 42, 42000000);
// 	// str_ = ft_substr(str, 42, 42000000);
// 	// printf("%s\n", str);
// 	// printf("%s\n",str_);
// 	return (0);
// }
