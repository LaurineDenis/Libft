/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <ldenis@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 09:57:44 by ldenis            #+#    #+#             */
/*   Updated: 2020/11/29 17:40:28 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back_bonus(t_list **alst, t_list *new)
{
	t_list		*last;

	last = (*alst);
	if (!(*alst))
		(*alst) = new;
	else
	{
		(*alst) = ft_lstlast(*alst);
		(*alst)->next = new;
		(*alst) = last;
	}
}
