/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 17:54:19 by dderevyn          #+#    #+#             */
/*   Updated: 2018/11/08 17:11:32 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		if ((unsigned char)s[i++] == c % 256)
			return ((char*)(s + i - 1));
	if ((unsigned char)s[i] == c % 256)
		return ((char*)(s + i));
	return (NULL);
}
