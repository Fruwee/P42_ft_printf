/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printunsd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: petrbenes <petrbenes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:39:14 by petrbenes         #+#    #+#             */
/*   Updated: 2024/06/20 14:58:12 by petrbenes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int printunsd(int d)
{
	long int d2;

	d2 = d;

	if (d2 < 0)
	{
		d2 = 4294967296 + d2;
	}

	if (d2 > 9)
	{
		printunsd(d2 / 10);
		ft_putchar((d2 % 10) + '0');
	}
	else
		ft_putchar(d2 + '0');
	return (1);
}
