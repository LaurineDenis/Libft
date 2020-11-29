/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <ldenis@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:43:04 by ldenis            #+#    #+#             */
/*   Updated: 2020/11/29 13:49:21 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[j] && ft_strchr(set, s1[j]) && j)
		j--;
	if (j == 0)
		return (ft_calloc(1, 1));
	if (!(str = (char *)malloc(sizeof(char) * (j + 1))))
		return (NULL);
	str = ft_substr(s1, i, j - i + 1);
	return (str);
}
