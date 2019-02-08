/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 20:17:43 by dderevyn          #+#    #+#             */
/*   Updated: 2019/02/08 16:05:02 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_safe(const char *str)
{
	size_t	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
		++i;
	return (i);
}

static char		*ft_strcpy_safe(char *dst, const char *src)
{
	size_t	i;

	if (src == NULL)
		return (dst);
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	return (dst);
}

static char		*ft_strcat_safe(char *str1, const char *str2)
{
	size_t	i1;
	size_t	i2;

	if (str2 == NULL)
		return (str1);
	i1 = 0;
	while (str1[i1])
		++i1;
	i2 = 0;
	while (str2[i2])
	{
		str1[i1] = str2[i2];
		++i1;
		++i2;
	}
	str1[i1] = '\0';
	return (str1);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	len;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	len = ft_strlen_safe(s1) + ft_strlen_safe(s2);
	if (!(dst = ft_strnew(len + 1)))
		return (NULL);
	ft_strcpy_safe(dst, s1);
	ft_strcat_safe(dst, s2);
	return (dst);
}
