/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:14:29 by dderevyn          #+#    #+#             */
/*   Updated: 2018/11/02 17:05:45 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	c;
	char			*a;
	const char		*b;

	a = dst;
	b = src;
	while (len-- > 0)
	{
		c = (unsigned char)*b++;
		*a++ = (unsigned char)c;
	}
	return (dst);
}
