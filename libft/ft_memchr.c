/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:22:05 by dderevyn          #+#    #+#             */
/*   Updated: 2018/11/01 13:55:53 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*src;
	size_t				i;

	src = (unsigned const char*)s;
	c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (src[i] == c)
			return ((void*)(&(src[i])));
		++i;
	}
	return (NULL);
}
