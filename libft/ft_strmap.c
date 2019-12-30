/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 22:42:46 by cnguyen           #+#    #+#             */
/*   Updated: 2019/09/29 23:00:15 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f) (char))
{
	int		len;
	char	*str;
	char	*ptr;
	int		i;

	if (!s)
		return (NULL);
	ptr = (char *)s;
	len = ft_strlen((char *)s);
	str = (char *)ft_memalloc((size_t)len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(ptr[i]);
		i++;
	}
	return (str);
}
