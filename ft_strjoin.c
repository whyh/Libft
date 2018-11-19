/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 20:17:43 by dderevyn          #+#    #+#             */
/*   Updated: 2018/11/19 21:27:16 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_slen(const char *s)
{
	size_t	i;

	if (s == NULL)
		return (0);
	i = 0;
	if (s == NULL)
		return (0);
	while (*s++)
		++i;
	return (i);
}

static char		*ft_scpy(char *dst, const char *src)
{
	char	*p;

	if (src == NULL)
		return (dst);
	p = dst;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (dst);
}

static char		*ft_scat(char *s1, const char *s2)
{
	char	*p;

	if (s2 == NULL)
		return (s1);
	p = s1;
	while (*s1)
		++s1;
	while (*s2)
		*s1++ = *s2++;
	*s1 = '\0';
	return (p);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	i = ft_slen(s1) + 1 + ft_slen(s2);
	str = ft_strnew(i);
	if (str == NULL)
		return (NULL);
	ft_scpy(str, s1);
	ft_scat(str, s2);
	return (str);
}
