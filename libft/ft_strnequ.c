/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <nthrynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:52:37 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/09 13:43:26 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && ((size_t)(i) < n))
	{
		if (s1[i] != s2[i])
			return (0);
		++i;
	}
	if ((size_t)i != n && s1[i] != s2[i])
		return (0);
	return (1);
}
