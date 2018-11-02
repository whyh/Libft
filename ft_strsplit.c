/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 17:05:55 by dderevyn          #+#    #+#             */
/*   Updated: 2018/11/02 19:45:54 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char		**arr;
	const char	*str;
	int			w;
	int			i;
	int			g;

	if (s == NULL)
		return (NULL);
	w = 1;
	i = 0;
	str = s;
	while (str[i++] != '\0')
		if ((i - 1 == 0 && str[i - 1] != c) || (str[i - 1] == c && str[i] != c))
			++w;
	arr = (char **)malloc(sizeof(**arr) * w);
	if (arr == NULL)
		return (NULL);
	i = 0;
	w = 0;
	while (str[i++] != '\0')
	{
		if (str[i - 1] != c && ( i - 1 == 0 || str[i - 2] == c))
		{
			g = 1;
			while (str[i - 1] != c && str[i - 1] != '\0')
			{
				++i;
				++g;
			}
			arr[w] = (char *)malloc(sizeof(**arr) * g);
			if (arr[w++] == NULL)
				return (NULL);
		}
	}
	i = 0;
	w = 0;
	while (str[i++] != '\0')
	{
		if (str[i - 1] != c)
		{
			g = 0;
			while (str[i - 1] != c && str[i - 1] != '\0')
				arr[w][g++] = str[i++ - 1];
			arr[w++][g] = '\0';
		}
	}
	arr[w] = NULL;
	return (arr);
}
