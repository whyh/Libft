/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memsest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 12:45:41 by dderevyn          #+#    #+#             */
/*   Updated: 2018/10/30 17:43:10 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*mem;
	size_t	i;

	mem = (char*)b;
	c = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		mem[i] = c;
		++i;
	}
	return ((void*)(mem));
}
