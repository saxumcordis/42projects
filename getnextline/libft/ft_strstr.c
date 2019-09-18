/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <nthrynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:56:44 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/08 10:04:48 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *)(str));
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0] || !to_find)
		{
			j = 1;
			while (str[i + j] == to_find[j] && to_find[j] != '\0')
				++j;
			if (to_find[j] == '\0')
				return ((char *)(str + i));
		}
		++i;
	}
	return (0);
}
