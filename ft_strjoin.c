/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <ldenis@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:27:08 by ldenis            #+#    #+#             */
/*   Updated: 2020/11/26 09:15:20 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;
	int k;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	k = i + j + 1;
	j = 0;
	while (i < k)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len;
	char		*str;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	str = ft_memcpy(str, (char *)s1, ft_strlen(s1) + 1);
	str = ft_strcat(str, (char *)s2);
	return (str);
}
