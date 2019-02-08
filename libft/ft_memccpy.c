/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 13:43:25 by dderevyn          #+#    #+#             */
/*   Updated: 2018/11/19 20:50:50 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char				*memdst;
	const unsigned char	*memsrc;
	size_t				i;

	memdst = (char*)dst;
	memsrc = (const unsigned char*)src;
	c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		memdst[i] = memsrc[i];
		if (memsrc[i] == c)
			return ((void*)(&(memdst[i + 1])));
		++i;
	}
	return (NULL);
}
