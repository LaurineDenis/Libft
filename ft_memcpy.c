/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <ldenis@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:48:28 by fle-biha          #+#    #+#             */
/*   Updated: 2020/11/26 08:54:28 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;
	size_t			i;

	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	i = -1;
	if (dest == 0 && src == 0)
		return (0);
	while (++i < n)
		tmp_dest[i] = tmp_src[i];
	return (dest);
}
