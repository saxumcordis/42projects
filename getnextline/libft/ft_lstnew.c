/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <nthrynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:20:13 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/08 16:56:18 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;

	if (!(tmp = (t_list *)ft_memalloc(sizeof(t_list))))
		return (0);
	if (!content)
	{
		tmp->content = NULL;
		tmp->content_size = 0;
	}
	else
	{
		if (!(tmp->content = malloc(content_size)))
			return (NULL);
		tmp->content = ft_memmove(tmp->content, content, content_size);
		tmp->content_size = content_size;
		return (tmp);
	}
	tmp->next = NULL;
	return (tmp);
}
