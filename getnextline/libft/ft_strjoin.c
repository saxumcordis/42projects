/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <nthrynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 12:19:57 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/08 13:32:29 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	sumlen;

	if (!s1 || !s2)
		return (0);
	sumlen = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	result = (char *)malloc(sizeof(char) * (sumlen + 1));
	if (result)
	{
		if (s1)
			ft_strcpy((char*)result, (char*)s1);
		else if (s2)
			ft_strcpy((char*)result, (char*)s2);
		if (s1 && s2)
			ft_strcat(result, s2);
	}
	return (result);
}
