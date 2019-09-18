/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <nthrynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:30:20 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/08 13:29:41 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_bzero(void *src, size_t count)
{
	size_t	i;
	char	*temp_src;

	i = 0;
	temp_src = src;
	while (i < count)
	{
		temp_src[i] = 0;
		++i;
	}
}
