/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <nthrynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:50:12 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/17 18:10:59 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"
#include <stdlib.h>
#include "libft/libft.h"
#include <libc.h>

int		ft_new_line(char **res, char **line, int fd)
{
	char	*tmp;
	size_t	i;

	i = 0;
	while (res[fd][i] != '\n' && res[fd][i] != '\0')
		i++;
	if (res[fd][i] == '\n')
	{
		*line = ft_strsub(res[fd], 0, i);
		tmp = ft_strdup(res[fd] + i + 1);
		free(res[fd]);
		res[fd] = tmp;
		if (res[fd][0] == '\0')
			ft_strdel(&res[fd]);
	}
	else if (res[fd][i] == '\0')
	{
		*line = ft_strdup(res[fd]);
		ft_strdel(&res[fd]);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*res[15000];
	char		buf[BUFF_SIZE + 1];
	char		*tmp;
	int			ret;

	if (fd < 0 || line == NULL || read(fd, buf, 0) > 0 || fd > 200)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (res[fd] == NULL)
			res[fd] = ft_strnew(1);
		tmp = ft_strjoin(res[fd], buf);
		free(res[fd]);
		res[fd] = tmp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	else if (ret == 0 && (res[fd] == NULL || res[fd] == '\0'))
		return (0);
	return (ft_new_line(res, line, fd));
}
