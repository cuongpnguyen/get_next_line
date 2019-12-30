/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_List_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 11:45:10 by cnguyen           #+#    #+#             */
/*   Updated: 2019/09/30 12:00:39 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_list_size(t_list *begin_list)
{
	int i;

	if (begin_list == 0)
		return (0);
	i = 1;
	while (begin_list->next != 0)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}
