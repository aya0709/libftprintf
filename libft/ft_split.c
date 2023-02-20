/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:53:44 by ataira            #+#    #+#             */
/*   Updated: 2023/02/05 22:16:14 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(char const *s, char c, int **lensandindxs)
{
	size_t	i;
	int		len;
	size_t	lens;
	size_t	cnt;

	i = 0;
	len = 0;
	lens = ft_strlen(s);
	cnt = 0;
	while (i <= lens)
	{
		if (s[i] != c && s[i] != '\0')
			len++;
		else if (len != 0)
		{
			(*lensandindxs)[cnt] = len + 1;
			(*lensandindxs)[cnt + lens] = i - len;
			cnt++;
			len = 0;
		}
		i++;
	}
	return (cnt);
}

static void	freemem(char **str, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return ;
}

char	**ft_split(char const *s, char c)
{
	size_t	cnt;
	int		*lensindxs;
	char	**str;

	if (s == NULL)
		return (NULL);
	lensindxs = ft_calloc(2 * ft_strlen(s) + 1, sizeof(int));
	if (lensindxs == NULL)
		return (NULL);
	cnt = get_size(s, c, &lensindxs);
	str = ft_calloc(cnt + 1, sizeof(char *));
	if (str == NULL)
		return (NULL);
	while (0 < cnt--)
	{
		str[cnt] = ft_calloc(lensindxs[cnt], sizeof(char));
		if (str[cnt] == NULL)
		{
			freemem(str, cnt);
			return (NULL);
		}
		ft_strlcpy(str[cnt], s + lensindxs[cnt + ft_strlen(s)], lensindxs[cnt]);
	}
	free(lensindxs);
	return (str);
}

// int	main(void)
// {
// 	size_t	i;
// 	char	**str;

// 	i = 0;
// 	str = ft_split("hello,world,42,tokyo", ',');
// 	while (str[i] != NULL)
// 	{
// 		printf("%zu %s\n",i ,str[i]);
// 		i++;
// 	}
// 	free(str);
// 	return (0);
// }
