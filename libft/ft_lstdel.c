/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 17:43:46 by cnguyen           #+#    #+#             */
/*   Updated: 2019/10/07 14:37:22 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*p;
	t_list	*temp;

	p = *alst;
	while (p)
	{
		temp = p->next;
		ft_lstdelone(&p, del);
		p = temp;
	}
	*alst = 0;
	return ;
}
