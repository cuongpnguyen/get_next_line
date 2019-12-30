/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 22:56:29 by cnguyen           #+#    #+#             */
/*   Updated: 2019/09/29 23:11:23 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				count;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	count = 0;
	while (n > 0)
	{
		if (*str1 != *str2)
		{
			count += *str1 - *str2;
			break ;
		}
		if (*str1 == '\0' && *str2 == '\0')
			return (0);
		n--;
		str1++;
		str2++;
	}
	return (count);
}
