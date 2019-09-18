/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 15:54:01 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/05 15:54:02 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *result;
	int i;

	if (min >= max)
		return (0);
	result = malloc(sizeof(int) * (max - min));
	if (!result)
		return (0);
	i = 0;
	while (min < max)
	{
		result[i] = min;
		++min;
		++i;
	}
	return (result);
}
