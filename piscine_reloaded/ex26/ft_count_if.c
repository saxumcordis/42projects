/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 16:05:38 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/05 16:05:39 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char *))
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			++count;
		++i;
	}
	return (count);
}