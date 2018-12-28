/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linetrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 16:13:38 by dderevyn          #+#    #+#             */
/*   Updated: 2018/11/26 16:19:24 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_linetrim(char **str, size_t n)
{
	size_t	strlen;
	size_t	i;
	char	*s;
	char	*ret;

	s = *str + n;
	strlen = ft_strlen(s);
	if (!(ret = ft_strnew(strlen)))
		return (0);
	i = 0;
	while (i < strlen)
	{
		ret[i] = s[i];
		++i;
	}
	ft_strdel(str);
	*str = ret;
	return (strlen);
}
