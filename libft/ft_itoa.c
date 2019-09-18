/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <nthrynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 17:53:36 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/08 16:12:32 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int		get_size(int nb)
{
	int size;

	size = 0;
	if (nb < 0)
	{
		++size;
	}
	while (nb)
	{
		++size;
		nb = nb / 10;
	}
	return (size);
}

char			*ft_itoa(int n)
{
	int		nb;
	int		size;
	char	*result;

	nb = n;
	size = get_size(n);
	if (!(result = ft_strnew(size)))
		return (0);
	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	while (size--)
	{
		result[size] = (n < 0) ? (n % 10) * -1 + 48 : n % 10 + 48;
		n = n / 10;
	}
	if (nb < 0)
		result[0] = '-';
	return (result);
}
