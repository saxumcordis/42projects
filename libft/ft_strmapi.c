/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <nthrynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:42:30 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/08 13:33:14 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned int	i;

	if (!s)
		return (0);
	newstr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (newstr)
	{
		i = 0;
		while (s[i] != '\0')
		{
			newstr[i] = f(i, s[i]);
			++i;
		}
		newstr[i] = '\0';
		return (newstr);
	}
	else
		return (0);
}
