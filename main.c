/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 16:41:57 by dderevyn          #+#    #+#             */
/*   Updated: 2018/11/02 19:42:05 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
//#include <libc.h>
//#include <ctype.h>
#include <fcntl.h>

#define MAX_INT "\3-975810"
#define MIN_INT	2147483648

int	main(void)
{
	char	*a = "VAF";
	char	**arr;

	arr = ft_strsplit(a, ' ');
	while (*arr)
	{
		ft_putstr(*(arr++));
		ft_putchar('\n');
	}
	return (0);
}
