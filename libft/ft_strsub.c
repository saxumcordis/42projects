/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <nthrynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 10:28:45 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/09 14:03:23 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;

	if (len + 1 <= 0)
		return (0);
	if (!s || !(result = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	i = 0;
	while (i < len && s[i] != '\0')
	{
		result[i] = s[start + i];
		++i;
	}
	result[i] = '\0';
	return (result);
}
