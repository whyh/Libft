/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 19:12:17 by dderevyn          #+#    #+#             */
/*   Updated: 2018/11/19 22:39:49 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*h;
	const char	*n;
	int			l;

	while (*haystack++ && len-- > 0)
	{
		l = len;
		h = haystack - 1;
		n = needle;
		while (*n && *h && *n == *h++ && l-- >= 0)
			++n;
		if (!*n)
			return ((char*)(haystack - 1));
	}
	return (NULL);
}
