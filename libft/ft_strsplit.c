/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthrynn <nthrynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:51:57 by nthrynn           #+#    #+#             */
/*   Updated: 2019/09/09 14:59:56 by nthrynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int		get_height(char *str, char c)
{
	int height;
	int i;

	i = 0;
	height = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			++height;
		++i;
	}
	return (height);
}

static	int		get_str_len(const char *s, char c, int *position)
{
	int i;
	int len;

	len = 0;
	i = *position;
	while (s[i] == c)
		++i;
	while (s[i] != c && s[i])
	{
		++len;
		++i;
	}
	return (len);
}

static	char	*make_str(const char *str, char c, int *i)
{
	char	*result;
	int		j;

	j = 0;
	result = malloc(sizeof(char) * (get_str_len(str, c, i) + 1));
	if (!result)
		return ("-");
	while (str[*i] == c)
		++(*i);
	while (str[*i] != c && str[*i])
		result[j++] = str[(*i)++];
	result[j] = '\0';
	return (result);
}

char			**ft_strsplit(char const *str, char c)
{
	int		position;
	int		i;
	int		height;
	char	**result;

	if (!str)
		return (0);
	height = get_height((char *)str, c);
	result = malloc(sizeof(char *) * (height + 1));
	if (!str || !result)
		return (0);
	position = 0;
	i = 0;
	while (i < height)
	{
		result[i] = make_str(str, c, &position);
		if (result[i][0] == (char)'-')
			while (i >= 0)
				free(result[i--]);
		++i;
	}
	result[i] = NULL;
	return (result);
}
