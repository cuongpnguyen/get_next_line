/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 12:08:11 by cnguyen           #+#    #+#             */
/*   Updated: 2019/09/30 12:08:33 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int ft_div;
	int ft_mod;

	ft_div = a / b;
	ft_mod = a % b;
	*div = ft_div;
	*mod = ft_mod;
}
