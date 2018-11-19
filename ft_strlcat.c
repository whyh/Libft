/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 17:03:09 by dderevyn          #+#    #+#             */
/*   Updated: 2018/11/19 22:20:16 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	const char	*s;
	char		*d;
	size_t		sl;
	size_t		dl;

	d = dst;
	s = src;
	dl = ft_strlen(dst);
	sl = ft_strlen(src);
	if (sl == 0 || dstsize < dl)
		return (dstsize + sl);
	d = d + dl;
	while (*s && dstsize-- - dl > 1)
		*d++ = *s++;
	*d = '\0';
	while (dstsize-- - dl > 0)
		*d = '\0';
	return (dstsize + sl + 1);
}
