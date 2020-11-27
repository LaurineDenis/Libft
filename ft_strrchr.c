/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <ldenis@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 12:49:09 by ldenis            #+#    #+#             */
/*   Updated: 2020/11/25 16:12:53 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	size_t		i;

	i = ft_strlen((char *)s);
	if (!(c))
		return ((char *)s + i);
	while (i--)
		if (s[i] == c)
			return ((char *)s + i);
	return (NULL);
}
