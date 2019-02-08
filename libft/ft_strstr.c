/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 18:38:34 by dderevyn          #+#    #+#             */
/*   Updated: 2019/02/08 16:05:02 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	n;

	if ((!*haystack && !*needle) || (!*needle && *haystack))
		return ((char*)haystack);
	i = 0;
	while (haystack[i])
	{
		n = 0;
		while (haystack[i + n] && needle[n] && haystack[i + n] == needle[n])
			++n;
		if (needle[n] == '\0')
			return ((char*)(&(haystack[i])));
		++i;
	}
	return (NULL);
}
