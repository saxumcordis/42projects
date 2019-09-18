/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <nthrynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:59:35 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/08 10:27:20 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*temp_dest;
	const unsigned char	*temp_src;

	i = 0;
	if (!dest && !src)
		return (dest);
	temp_dest = (unsigned char *)dest;
	temp_src = (const unsigned char *)src;
	if (dest > src)
		while (++i <= n)
			temp_dest[n - i] = temp_src[n - i];
	else
		while (i < n)
		{
			temp_dest[i] = temp_src[i];
			++i;
		}
	return (dest);
}
