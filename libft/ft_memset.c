/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <nthrynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:00:15 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/07 19:33:53 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *buf, int ch, size_t count)
{
	size_t	i;
	char	*temp_buf;

	i = 0;
	temp_buf = buf;
	while (i < count)
	{
		temp_buf[i] = ch;
		++i;
	}
	return (temp_buf);
}
