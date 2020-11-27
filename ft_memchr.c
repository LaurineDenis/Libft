/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <ldenis@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 12:46:11 by fle-biha          #+#    #+#             */
/*   Updated: 2020/11/26 09:02:08 by ldenis           ###   ########lyon.fr   */
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
	if (!c)
		return (tmp_s + ft_strlen(s));
	while (tmp_s[++i] && j < n)
	{
		if (tmp_s[i] == c)
			return (tmp_s + i);
		j++;
	}
	return (0);
}
