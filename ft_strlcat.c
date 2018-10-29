/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 17:03:09 by dderevyn          #+#    #+#             */
/*   Updated: 2018/10/29 17:53:36 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	l;
	size_t	i;

	i = ft_strlen(dst);
	l = dstsize - ft_strlen(dst) - 1;
	while (*dst)
		++dst;
	while (*src && l-- > 0)
		*dst++ = *src++;
	*dst = '\0';
	return (ft_strlen(src) + i);
}
