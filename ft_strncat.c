/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 16:53:34 by dderevyn          #+#    #+#             */
/*   Updated: 2018/10/29 17:02:13 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char *restrict	p;

	p = s1;
	while (*s1)
		++s1;
	while (*s2 && n-- > 0)
		*s1++ = *s2++;
	*s1 = '\0';
	return (p);
}
