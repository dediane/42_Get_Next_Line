/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 19:50:54 by ddecourt          #+#    #+#             */
/*   Updated: 2020/12/17 19:03:10 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
#endif

char	*ft_strndup(const char *s1, int n);
char	*ft_strchr(const char *s, int c);
char 	*ft_strjoin(const char *s1, char const *s2);
int		ft_strlen(const char *str);
int		get_next_line(int fd, char **line);

#endif
