/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <ldenis@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 19:36:09 by ldenis            #+#    #+#             */
/*   Updated: 2020/11/26 05:14:26 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strncpy(char *src, unsigned int n)
{
	unsigned int	i;
	char			*dst;

	i = 0;
	if (!(dst = ft_calloc(1, n + 1)))
		return (NULL);
	while (i < n && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

static int		counter_word(const char *str, char set)
{
	int		counter;
	int		i;

	counter = 0;
	i = 0;
	if (str[0] != set)
		counter++;
	while (str[i])
	{
		if (str[i] == set && str[i + 1] != set)
			counter++;
		i++;
	}
	return (counter);
}

char			**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		count_sep;
	int		j;
	int		tmp;

	i = 0;
	j = 0;
	if (!(split = ft_calloc(sizeof(char *), counter_word(s, c) + 1)))
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			count_sep = 1;
			tmp = i;
			while (s[++i] != c && s[i])
				count_sep++;
			split[j++] = ft_strncpy((char *)s + tmp, count_sep);
		}
		else
			i++;
	}
	split[j] = 0;
	return (split);
}
