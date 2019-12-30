/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 22:40:08 by cnguyen           #+#    #+#             */
/*   Updated: 2019/09/29 22:44:02 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int found;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		found = i;
		j = 0;
		while (haystack[i] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char*)&haystack[found]);
			j++;
			i++;
		}
		i = found;
		i++;
	}
	return (NULL);
}
