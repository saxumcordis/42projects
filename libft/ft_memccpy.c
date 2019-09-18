/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <nthrynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:37:43 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/08 10:08:49 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp_dest;
	unsigned char	*temp_source;

	i = 0;
	temp_dest = (unsigned char *)dest;
	temp_source = (unsigned char *)src;
	while (i < n)
	{
		temp_dest[i] = temp_source[i];
		if (temp_dest[i] == (unsigned char)c)
			return ((void*)(temp_dest + i + 1));
		++i;
	}
	return (0);
}
