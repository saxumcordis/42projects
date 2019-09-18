/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <nthrynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:46:12 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/08 10:27:22 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*temp_s1;
	const unsigned char	*temp_s2;

	if (n == 0)
		return (0);
	i = 0;
	temp_s1 = (unsigned char *)s1;
	temp_s2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (temp_s1[i] != (unsigned char)temp_s2[i])
			return ((int)(temp_s1[i] - temp_s2[i]));
		++i;
	}
	return (0);
}
