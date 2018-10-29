/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 16:41:57 by dderevyn          #+#    #+#             */
/*   Updated: 2018/10/29 19:50:09 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <libc.h>

int	main(void)
{
	char	a[20] = {'\200'};
	char	b[7] = {'\0'};

	ft_putnbr(strcmp(a, b));
	ft_putchar('\n');
	ft_putnbr(ft_strcmp(a, b));
	return (0);
}
