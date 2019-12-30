/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 15:30:10 by cnguyen           #+#    #+#             */
/*   Updated: 2019/09/30 00:04:28 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_forward(char *s)
{
	int	count;

	count = 0;
	while ((s[count] == 9 || s[count] == 10 || s[count] == 32) && s[count])
	{
		count++;
	}
	return (count);
}

static int		count_backward(char *s)
{
	int back_len;

	back_len = ft_strlen((char *)s) - 1;
	while (back_len >= 0 && (s[back_len] == 9 ||
				s[back_len] == 10 || s[back_len] == 32))
	{
		back_len--;
	}
	return (back_len);
}

static void		copy_no_space(char *str, char *s, int f, int b)
{
	int	i;

	i = 0;
	while (f <= b)
	{
		str[i] = s[f];
		i++;
		f++;
	}
	str[i] = '\0';
}

static char		*empty_pointer(void)
{
	char *s;

	s = ft_memalloc(1);
	*s = '\0';
	return (s);
}

char			*ft_strtrim(char const *s)
{
	char	*str;
	int		len;
	int		f;
	int		b;

	if (!s)
		return (NULL);
	f = count_forward((char *)s);
	b = count_backward((char *)s);
	if (s[f] == '\0')
		return (empty_pointer());
	len = b - f + 1;
	str = (char *)ft_memalloc(len + 1);
	if (!str)
		return (NULL);
	copy_no_space(str, (char *)s, f, b);
	return (str);
}
