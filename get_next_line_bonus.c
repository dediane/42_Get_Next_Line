/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 01:24:32 by ddecourt          #+#    #+#             */
/*   Updated: 2020/12/31 02:17:12 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static	int	getline(char **tmp_buffer, char *buf, int size)
{
	char	*tmp;

	buf[size] = '\0';
	if (0 != *tmp_buffer)
	{
		tmp = ft_strjoin(*tmp_buffer, buf);
		free(*tmp_buffer);
	}
	else
		tmp = ft_strndup(buf, size);
	*tmp_buffer = tmp;
	if (ft_strchr(*tmp_buffer, '\n'))
		return (1);
	return (0);
}

static	int	check(char **tmp_buffer, char **line)
{
	char	*ptr;
	char	*tmp;

	if ((ptr = ft_strchr(*tmp_buffer, '\n')))
	{
		*line = ft_strndup(*tmp_buffer, ptr - *tmp_buffer);
		tmp = ft_strndup(ptr + 1, ft_strlen(ptr + 1));
		free(*tmp_buffer);
		*tmp_buffer = tmp;
		return (1);
	}
	else
	{
		*line = *tmp_buffer;
		*tmp_buffer = 0;
		return (0);
	}
}

int			get_next_line(int fd, char **line)
{
	int			size;
	static char	*tmp_buffer[2048];
	char		*buf;

	if (fd < 0 || fd >= 2048 || BUFFER_SIZE <= 0 || line == NULL)
		return (-1);
	if (!(buf = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	while ((size = read(fd, buf, BUFFER_SIZE)) >= 0)
	{
		if (getline(&tmp_buffer[fd], buf, size) || size <= 0)
			break ;
	}
	free(buf);
	if (size < 0)
		return (-1);
	return (check(&tmp_buffer[fd], line));
}
