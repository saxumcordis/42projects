/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 16:08:38 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/05 16:08:39 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 4096

int			ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		++i;
	}
}

void		check_errors(int argc)
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	if (argc > 2)
		ft_putstr("Too many arguments.\n");
}

int			main(int argc, char **argv)
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
