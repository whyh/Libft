/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 18:23:34 by dderevyn          #+#    #+#             */
/*   Updated: 2018/11/19 22:34:14 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const unsigned char	*str;
	size_t				i;

	str = (const unsigned char*)s;
	c = (unsigned char)c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (str[i] == c)
			return ((char*)&(str[i]));
		--i;
	}
	if (str[i] == c)
		return ((char*)&(str[i]));
	return (NULL);
}
