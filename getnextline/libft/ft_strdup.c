/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <nthrynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:09:25 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/14 15:14:10 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strdup(const char *src)
{
	char *dest;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest)
		return (ft_strcpy(dest, src));
	else
		return (0);
}
