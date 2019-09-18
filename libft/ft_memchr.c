/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <nthrynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:45:37 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/07 19:43:20 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int ch, size_t n)
{
	size_t			i;
	unsigned char	*temp_src;

	i = 0;
	temp_src = (unsigned char *)src;
	while (i < n)
	{
		if (temp_src[i] == (unsigned char)ch)
			return ((void *)(temp_src + i));
		++i;
	}
	return (0);
}
