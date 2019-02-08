/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 13:25:31 by dderevyn          #+#    #+#             */
/*   Updated: 2018/11/28 14:45:16 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*memdst;
	const char	*memsrc;
	size_t		i;

	memdst = (char*)dst;
	memsrc = (const char*)src;
	i = 0;
	while (i < n)
	{
		memdst[i] = memsrc[i];
		++i;
	}
	return (dst);
}
