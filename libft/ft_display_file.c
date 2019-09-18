/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <nthrynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:38:08 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/09 14:39:54 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "libft.h"
#define BUF_SIZE 4096

static void		check_errors(int argc)
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	if (argc > 2)
		ft_putstr("Too many arguments.\n");
}

int				ft_display_file(int argc, char **argv)
{
	int		f;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc != 2)
	{
		check_errors(argc);
		return (0);
	}
	f = open(argv[1], O_RDONLY);
	if (f == -1)
		return (0);
	while ((ret = read(f, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		write(1, buf, ret);
	}
	close(f);
	return (0);
}
