/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 22:45:26 by cnguyen           #+#    #+#             */
/*   Updated: 2019/09/26 22:46:07 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char			*ptr;
	char			*str;
	unsigned int	len;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	ptr = (char *)s;
	len = (unsigned int)ft_strlen((char*)s);
	str = (char *)ft_memalloc((size_t)ft_strlen((char*)s) + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, ptr[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
