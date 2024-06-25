/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: petrbenes <petrbenes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:20:58 by petrbenes         #+#    #+#             */
/*   Updated: 2024/06/25 10:05:37 by petrbenes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int numlen(int d)
{
	int len;

	len = 1;
	while (d > 1)
	{
		d = d / 10;
		len++;
	}
	return (len);
}

int printdigit(int d)
// d is integer passed in fc, l is lenght of printed argument
{
	long int d2;

	d2 = d;

	if (d2 < 0)
	{
		write(1, "-", 1);
		d2 = d2 * -1;
	}

	if (d2 > 9)
	{
		printdigit(d2 / 10);
		ft_putchar((d2 % 10) + '0');
	}
	else
		ft_putchar(d2 + '0');
	return (0);
}
