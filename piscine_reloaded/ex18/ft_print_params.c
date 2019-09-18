/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <nthrynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 15:34:04 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/07 10:07:44 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_putchar(char c);

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

int			main(int argc, char **argv)
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
	return (0);
}
