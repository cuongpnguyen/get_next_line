/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 11:42:56 by cnguyen           #+#    #+#             */
/*   Updated: 2019/09/30 11:47:53 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_create_elem(void *data)
{
	t_list *new_list;

	new_list = malloc(sizeof(t_list));
	if (new_list)
	{
		new_list->content = data;
		new_list->next = NULL;
	}
	return (new_list);
}
