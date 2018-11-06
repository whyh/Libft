/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 17:00:08 by dderevyn          #+#    #+#             */
/*   Updated: 2018/11/04 18:44:41 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *string)
{
	long long int	i;
	long long int	k;

	k = 1;
	i = 0;
	while (*string == ' ' || *string == '\f' || *string == '\n'
			|| *string == '\r' || *string == '\t' || *string == '\v')
		++string;
	if (*string == '+' || *string == '-')
		if (*string++ == '-')
			k = -1;
	while (*string >= '0' && *string <= '9')
	{
		if ((i > 922337203685477580 || (i == 922337203685477580
		&& (*string - 48) > 7)) && k == 1)
			return (-1);
		else if ((i > 922337203685477580 || (i == 922337203685477580
		&& (*string - 48) > 8)) && k == -1)
			return (0);
		i = i * 10 + *string++ - 48;
	}
	return (k * i);
}
