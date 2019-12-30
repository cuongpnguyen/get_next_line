/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 13:48:23 by cnguyen           #+#    #+#             */
/*   Updated: 2019/09/30 00:06:12 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		pos_handle_fd(int nb, int fd)
{
	int		i;
	char	buffer[12];

	i = 0;
	while (nb != 0)
	{
		buffer[i] = '0' + (nb % 10);
		nb = nb / 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		ft_putchar_fd(buffer[i], fd);
	}
	return ;
}

static void		neg_handle_fd(int nb, int fd)
{
	if (nb == 0)
		ft_putchar_fd('0', fd);
	else if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		if (nb == -2147483648)
		{
			ft_putchar_fd('2', fd);
			nb = -147483648;
		}
		nb *= -1;
	}
	pos_handle_fd(nb, fd);
	return ;
}

void			ft_putnbr_fd(int nb, int fd)
{
	if (nb <= 0)
		neg_handle_fd(nb, fd);
	else
		pos_handle_fd(nb, fd);
	return ;
}
