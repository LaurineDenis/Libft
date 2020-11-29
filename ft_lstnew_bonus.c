/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <ldenis@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 17:38:17 by ldenis            #+#    #+#             */
/*   Updated: 2020/11/29 17:41:05 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew_bonus(void *content)
{
	t_list	*element;

	if (!(element = malloc(sizeof(*element))))
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}
