/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhexu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: petrbenes <petrbenes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:35:44 by petrbenes         #+#    #+#             */
/*   Updated: 2024/06/25 14:53:20 by petrbenes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_conversionu(int i)
{
	int c; // counter
	int h; // holding value
	char *str;
	int l;

	l = n_len(i);
	str = (char *)malloc(l + 1);
	c = 0;

	while (c < l)
	{
		h = i % 16;
		i = (i - h) / 16;
		if (h < 10)
		{
			str[c] = (h + '0');
		}
		else
			str[c] = (h + 55);
		c++;
	}
	str[c + 1] = '\0';
	return (str);
	free(str);
}
int printhexu(int i)
{
	int c2;
	char *str;

	str = ft_conversionu(i);
	c2 = hex_len(i);

	if (i == 0)
		ft_putchar('0');
	else
	{
		while (c2 >= 0)
		{
			ft_putchar(str[c2]);
			c2--;
		}
	}
	return (hex_len(i));
}
