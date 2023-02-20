/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:19:25 by ataira            #+#    #+#             */
/*   Updated: 2023/02/05 01:00:22 by ataira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	len;
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}

// void	f(unsigned int n, char *c)
// {
// 	if (n < 0)
// 		return ;
// 	*c = ft_toupper((int)(*c));
// 	return ;
// }

// int	main(void)
// {
// 	char	str[] = "ab cd ";

// 	ft_striteri(str, f);
// 	printf("%s", str);
// 	return (0);
// }
