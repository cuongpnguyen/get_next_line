/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 22:57:18 by cnguyen           #+#    #+#             */
/*   Updated: 2019/09/29 23:51:56 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	int		found;

	i = 0;
	j = 0;
	found = 0;
	if (to_find[0] == '\0')
		return ((char*)str);
	while (i < len && str[i] != '\0')
	{
		found = i;
		j = 0;
		while (str[i] == to_find[j] && (size_t)i < len)
		{
			if (to_find[j + 1] == '\0')
				return ((char*)&str[found]);
			j++;
			i++;
		}
		i = found;
		i++;
	}
	return (0);
}
