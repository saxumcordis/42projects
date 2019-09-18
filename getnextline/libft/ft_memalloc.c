/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <nthrynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:36:43 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/09 13:50:48 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		*ft_memalloc(size_t size)
{
	void *fresh_memory;

	if (!(fresh_memory = (void *)malloc(size)))
		return (0);
	ft_bzero(fresh_memory, size);
	return (fresh_memory);
}
