/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 14:11:43 by cnguyen           #+#    #+#             */
/*   Updated: 2019/10/16 14:46:36 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_strx(char *s, char c)
{
	int		count;

	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] == c)
			return (count);
		count++;
	}
	return (count);
}

static int	handle_end(char **s, char **line, int ret, int fd)
{
	char	*l;
	char	*tmp;
	int		len;

	l = *line;
	tmp = *s;
	len = ft_strx(s[fd], '\n');
	if (s[fd][len] == '\0')
	{
		if (ret == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(s[fd]);
		ft_strdel(&s[fd]);
	}
	else
	{
		*line = ft_strsub(s[fd], 0, ft_strx(s[fd], '\n'));
		tmp = ft_strdup(s[fd] + ft_strx(s[fd], '\n') + 1);
		free(s[fd]);
		s[fd] = tmp;
	}
	return (1);
}

static int	handle_output(char **s, char **line, int ret, int fd)
{
	if (ret < 0)
		return (-1);
	else if (ret == 0 && (s[fd] == NULL || *s[fd] == '\0'))
		return (0);
	return (handle_end(s, line, ret, fd));
}

int			get_next_line(const int fd, char **line)
{
	static char	*s[FD_SIZE];
	char		buf[BUFF_SIZE + 1];
	char		*tmp;
	int			ret;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (s[fd] == NULL)
			s[fd] = ft_strnew(1);
		tmp = ft_strjoin(s[fd], buf);
		free(s[fd]);
		s[fd] = tmp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	return (handle_output(s, line, ret, fd));
}
