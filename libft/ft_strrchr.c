/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 22:27:02 by cnguyen           #+#    #+#             */
/*   Updated: 2019/09/29 22:27:04 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	pos;
	int	i;
	int	len;

	i = 0;
	pos = -1;
	if (*s == '\0')
		return (NULL);
	len = ft_strlen((char *)s);
	if (c == '\0')
		return ((char *)s + len);
	while (i < len)
	{
		if (s[i] == c)
			pos = i;
		i++;
	}
	if (pos == -1)
		return (NULL);
	return ((char *)&s[pos]);
}
