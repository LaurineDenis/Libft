/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <ldenis@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 12:00:44 by ldenis            #+#    #+#             */
/*   Updated: 2020/11/29 17:40:38 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear_bonus(t_list **lst, void (*del)(void*))
{
	t_list		*next;
	t_list		*begin;

	next = NULL;
	begin = (*lst);
	while (*lst)
	{
		next = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = next;
	}
	free(*lst);
	(*lst) = NULL;
	begin = NULL;
}
