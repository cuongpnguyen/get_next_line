/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 15:53:00 by cnguyen           #+#    #+#             */
/*   Updated: 2019/09/30 00:03:00 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char *s, char c)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s == '\0')
			return (count);
		while (*s != '\0' && *s != c)
		{
			s++;
		}
		count++;
	}
	return (count);
}

static int		single_word(char *s, char c)
{
	int	count;

	count = 0;
	while (*s != '\0' && *s != c)
	{
		count++;
		s++;
	}
	return (count);
}

static void		fill_strsplit(char **arr, char c, char *s, int len)
{
	int		i;
	int		j;
	int		word_len;

	word_len = 0;
	i = 0;
	while (i < len)
	{
		while (*s != '\0' && *s == c)
			s++;
		word_len = single_word(s, c);
		arr[i] = (char*)ft_memalloc((size_t)word_len + 1);
		j = 0;
		while (*s != '\0' && *s != c)
		{
			arr[i][j] = *s;
			j++;
			s++;
		}
		i++;
	}
	arr[i] = NULL;
}

char			**ft_strsplit(char const *s, char c)
{
	int		word_count;
	char	**arr;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	word_count = 0;
	word_count = count_words((char *)s, c);
	arr = (char**)ft_memalloc((size_t)(word_count + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	fill_strsplit(arr, c, (char *)s, word_count);
	return (arr);
}
