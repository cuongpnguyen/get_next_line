/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:34:00 by cnguyen           #+#    #+#             */
/*   Updated: 2019/10/16 14:42:37 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 6
# define FD_SIZE 4096

# include "libft.h"
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

int	get_next_line(const int fd, char **line);

#endif
