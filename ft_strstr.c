/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 18:38:34 by dderevyn          #+#    #+#             */
/*   Updated: 2018/10/31 21:26:20 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*n;
	const char	*h;

	if (!*needle)
		return ((char*)haystack);
	while (*haystack++)
	{
		h = haystack - 1;
		n = needle;
		while (*n && *h && *n == *h++)
			++n;
		if (!*n)
			return ((char*)(haystack - 1));
	}
	return (NULL);
}
