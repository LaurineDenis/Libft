/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <ldenis@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 17:38:36 by ldenis            #+#    #+#             */
/*   Updated: 2020/11/29 17:40:50 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstlast_bonus(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
		{
			lst = lst->next;
		}
		return (lst);
	}
	return (NULL);
}
