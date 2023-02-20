/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:39:16 by ataira            #+#    #+#             */
/*   Updated: 2023/02/03 05:48:33 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	st;
	char	*str;

	i = 0;
	st = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	if (s1[0] == '\0')
	{
		str = ft_calloc(1, sizeof(char));
		if (str == NULL)
			return (NULL);
		return (str);
	}
	while (ft_strchr(set, (int)s1[i]) != NULL && i < ft_strlen(s1))
		i++;
	st = i;
	i = ft_strlen(s1);
	while (ft_strrchr(set, (int)s1[i]) != NULL && i > st)
		i--;
	str = ft_substr(s1, st, i - st + 1);
	if (str == NULL)
		return (NULL);
	return (str);
}

// int	main(void)
// {
// 	char	*str;

// 	str = ft_strtrim("l   xxx   xxx", " x");
// 	printf("%s", str);
// 	return (0);
// }
