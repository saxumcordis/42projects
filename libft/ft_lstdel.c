/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <nthrynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:39:44 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/09 13:49:35 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (!del || !(*alst))
		return ;
	if ((*alst)->next)
	{
		ft_lstdel(&(*alst)->next, del);
	}
	ft_lstdelone(alst, del);
}
