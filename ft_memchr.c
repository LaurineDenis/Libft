/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <ldenis@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:19:55 by ldenis            #+#    #+#             */
/*   Updated: 2020/11/28 18:31:39 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	char			*tmp_s;
	size_t			i;
	size_t			j;

	tmp_s = (char *)s;
	i = -1;
	j = 0;
	if (!c && n)
		return (tmp_s + ft_strlen(s));
	while (j < n)
	{
		i++;
		if (tmp_s[i] == c)
			return (tmp_s + i);
		j++;
	}
	return (0);
}
