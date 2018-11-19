/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 15:25:16 by dderevyn          #+#    #+#             */
/*   Updated: 2018/11/19 21:44:22 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s2;

	i = ft_strlen(s1);
	if (!(s2 = ft_strnew(i)))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		++i;
	}
	return (s2);
}
