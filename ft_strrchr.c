/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 18:23:34 by dderevyn          #+#    #+#             */
/*   Updated: 2018/11/08 17:12:32 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*a;

	a = NULL;
	while (*s)
		if ((unsigned char)*s++ == c % 256)
			a = (char*)(s - 1);
	if ((unsigned char)*s == c % 256)
		a = (char*)s;
	return (a);
}
