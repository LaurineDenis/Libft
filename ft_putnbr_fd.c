/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <ldenis@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 08:11:26 by ldenis            #+#    #+#             */
/*   Updated: 2020/11/26 08:25:31 by ldenis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		b;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		n = n * (-1);
		write(fd, "-", 1);
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	b = n % 10;
	b = '0' + b;
	write(fd, &b, 1);
}
