/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <nthrynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:17:09 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/08 16:00:21 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	unsigned int	finish;
	size_t			i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		++i;
	start = i;
	i = ft_strlen((char *)s);
	--i;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		--i;
	finish = i;
	if (finish - start > 0)
		return (ft_strsub(s, start, (size_t)(finish - start + 1)));
	return (0);
}
