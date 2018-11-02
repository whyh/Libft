/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 13:43:25 by dderevyn          #+#    #+#             */
/*   Updated: 2018/11/01 13:40:20 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
		size_t n)
{
	char		*a;
	const char	*b;

	a = dst;
	b = src;
	while (n-- > 0)
	{
		*a++ = *b;
		dst = a;
		if (*b++ == c || (unsigned char)*(b - 1) >= 127)
			return (dst);
	}
	return (NULL);
}
