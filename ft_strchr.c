/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <ldenis@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 13:37:39 by edassess          #+#    #+#             */
/*   Updated: 2020/11/25 15:01:57 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*temp_s;
	size_t	i;

	i = 0;
	temp_s = (char *)s;
	if (!c)
		return (temp_s + ft_strlen(s));
	while (i < ft_strlen(s))
	{
		if (temp_s[i] == c)
			return (temp_s + i);
		i++;
	}
	return (0);
}
