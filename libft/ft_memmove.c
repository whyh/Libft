/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:14:29 by dderevyn          #+#    #+#             */
/*   Updated: 2019/02/08 16:56:10 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*memsrc;
	char		*memdst;
	size_t		i;

	memsrc = (const char*)src;
	memdst = (char*)dst;
	if (memsrc < memdst)
	{
		i = len;
		while (i-- > 0)
			memdst[i] = memsrc[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			memdst[i] = memsrc[i];
			++i;
		}
	}
	return ((void*)(memdst));
}
