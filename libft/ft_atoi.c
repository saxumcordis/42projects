/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <nthrynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:27:04 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/12 17:40:24 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int		ft_check_overlap(const char *str, int sign, int i)
{
	long result;

	result = 0;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		if (result == 922337203685477580 && str[i] > '7')
		{
			if (sign == 1)
				return ((long)(-1));
			if (sign == -1 && str[i] > '8')
				return ((long)(0));
		}
		if (result > 922337203685477580)
		{
			if (sign == 1)
				return ((long)(-1));
			if (sign == -1)
				return ((long)(0));
		}
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return ((long)(result * sign));
}

int				ft_atoi(const char *str)
{
	int		f;
	int		i;
	long	result;
	int		sign;

	f = 0;
	while (str[f] == ' ' || (str[f] >= 9 && str[f] <= 13))
		f++;
	i = f;
	result = 0;
	sign = 1;
	if (str[f] == '-' || str[f] == '+')
	{
		if (str[f] == '-')
			sign = -1;
		i++;
	}
	return ((long)(ft_check_overlap(str, sign, i)));
}
