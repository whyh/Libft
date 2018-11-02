/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 20:17:43 by dderevyn          #+#    #+#             */
/*   Updated: 2018/10/31 18:26:11 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strconcat(const char *s1, const char *s2, char *str)
{
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;
	const char	*p;
	int			i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 1;
	p = s1;
	while (*p++)
		++i;
	p = s2;
	while (*p++)
		++i;
	str = ft_strnew(i--);
	if (str == NULL)
		return (NULL);
	ft_strconcat(s1, s2, str);
	return (str);
}
