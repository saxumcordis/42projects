/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <nthrynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:54:11 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/08 10:48:24 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!to_find[0])
		return ((char *)str);
	while (str[i] != '\0' && (size_t)i < n)
	{
		if (str[i] == to_find[0])
		{
			j = 1;
			while (str[i + j] == to_find[j] && to_find[j] != '\0'
					&& (size_t)(i + j) < n)
				++j;
			if (to_find[j] == '\0')
				return ((char *)(str + i));
		}
		++i;
	}
	return (0);
}
