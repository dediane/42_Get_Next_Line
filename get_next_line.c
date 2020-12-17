/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 19:50:43 by ddecourt          #+#    #+#             */
/*   Updated: 2020/12/17 13:04:02 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	getline(char **mark, char *buf, int size)
{
	char *tmp;

	buf[size] = '\0';
	if (0 != *mark)
	{
		tmp = ft_strjoin(*mark, buf);
		free(*store)
	}
	else
		tmp = ft_strndup(buf, read_size);
	*mark = tmp;
	if (ft_strchr(*mark, '\n'))
		return (1);
	return (0);
}

int	check(char **mark, char **line)
{
	char *ptr
	char *tmp

	if ((ptr = ft_strchr(*mark, '\n')))
	{
		*line = ft_strndup(*store, ptr - *store);
		tmp = ft_strndup(ptr + 1, ft_strlen(ptr + 1));
		free(*mark);
		*mark = tmp;
		return (1);
	}
	else
	{
		*line = *store;
		*store = 0;
		return (0);
	}
}

int	get_next_line(int fd, char **line)
{
	int size;
	char buf[BUFFER_SIZE + 1];

	if (fd < 0 || BUFFER_SIZE <= 0 || !line )
		return (NULL);
	while (size = read(fd, , BUFFER_SIZE) >= 0)
	{
		if (getline(&mark[fd], buf, size) || size == 0)
			break;
	}
}
