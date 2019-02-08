/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 11:22:26 by dderevyn          #+#    #+#             */
/*   Updated: 2019/02/08 16:11:41 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strtrim_delimiters(char c)
{
	if (c == '\t' || c == '\n' || c == ' ')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	len;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && ft_strtrim_delimiters(s[i]))
		++i;
	len = 0;
	while (s[i + len] != '\0')
		++len;
	while (ft_strtrim_delimiters(s[i + len - 1]) && len > i)
		--len;
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str = ft_strncpy(str, &(s[i]), len);
	str[len] = '\0';
	return (str);
}
