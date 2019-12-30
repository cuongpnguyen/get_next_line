/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 23:03:21 by cnguyen           #+#    #+#             */
/*   Updated: 2019/09/29 23:31:54 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;

	i = 0;
	s1_ptr = (unsigned char *)s1;
	s2_ptr = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (s1_ptr[i] == s2_ptr[i] && i < n)
	{
		i++;
		if (i == n)
			return ((int)(s1_ptr[i - 1] - s2_ptr[i - 1]));
	}
	return ((int)(s1_ptr[i] - s2_ptr[i]));
}
