/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 17:05:55 by dderevyn          #+#    #+#             */
/*   Updated: 2019/02/08 17:03:09 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strsplit_split(char **arr, const char *str, char c)
{
	size_t	w;
	size_t	i;
	size_t	len;

	i = 0;
	w = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			len = 0;
			while (str[i + len] && str[i + len] != c)
				++len;
			if (!(arr[w] = (char*)malloc(sizeof(**arr) * (len + 1))))
				return (0);
			arr[w] = ft_strncpy(arr[w], &(str[i]), len);
			arr[w][len] = '\0';
			++w;
			i += len;
		}
		if (str[i])
			++i;
	}
	arr[w] = NULL;
	return (1);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	size_t	w;
	size_t	i;

	if (s == NULL)
		return (NULL);
	w = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (!s[i + 1] || s[i + 1] == c))
			++w;
		++i;
	}
	if (!(arr = (char**)malloc(sizeof(char*) * (w + 1))))
		return (NULL);
	if (!ft_strsplit_split(arr, s, c))
		return (NULL);
	return (arr);
}
