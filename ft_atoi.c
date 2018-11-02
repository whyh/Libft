/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 17:00:08 by dderevyn          #+#    #+#             */
/*   Updated: 2018/11/02 19:56:14 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *string)
{
	int	i;
	int	k;

	k = 1;
	i = 0;
	while (*string == ' ' || (*string < 16 && *string > 7))
		++string;
	if (*string == '+' || *string == '-')
		if (*string++ == '-')
			k = -1;
	while (*string >= '0' && *string <= '9')
		i = i * 10 + *string++ - 48;
	return (k * i);
}
