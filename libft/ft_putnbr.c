/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 15:22:11 by cnguyen           #+#    #+#             */
/*   Updated: 2019/09/30 00:06:24 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		pos_handle(int nb)
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
		ft_putchar(buffer[i]);
	}
	return ;
}

static void		neg_handle(int nb)
{
	if (nb == 0)
		ft_putchar('0');
	else if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = -147483648;
		}
		nb *= -1;
	}
	pos_handle(nb);
	return ;
}

void			ft_putnbr(int nb)
{
	if (nb <= 0)
		neg_handle(nb);
	else
		pos_handle(nb);
	return ;
}
