/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 15:42:36 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/05 15:42:37 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_putchar (char c);

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar((str[i]));
		++i;
	}
}

int			ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	return (s1[i] - s2[i]);
}

void		ft_print_params(int argc, char **argv)
{
	int i;

	i = 1;
	if (i < argc)
		while (i < argc)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			++i;
		}
}

void		ft_sort_params(int argc, char **argv)
{
	int		i;
	char	*temp;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 0;
		}
		++i;
	}
	ft_print_params(argc, argv);
}

int			main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
	return (0);
}
