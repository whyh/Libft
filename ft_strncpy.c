/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 16:14:59 by dderevyn          #+#    #+#             */
/*   Updated: 2018/11/16 16:57:36 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char		*a;
	const char	*s;
	long int	k;

	k = len;
	if ((long int)ft_strlen(src) < k)
		k = -1;
	a = dst;
	s = src;
	while (len-- > 0 && *s)
		*a++ = *s++;
	++len;
	while (k < 0 && len-- > 0)
		*a++ = '\0';
	return (dst);
}
