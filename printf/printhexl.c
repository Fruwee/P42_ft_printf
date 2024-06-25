/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhexl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: petrbenes <petrbenes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:35:44 by petrbenes         #+#    #+#             */
/*   Updated: 2024/06/20 14:56:48 by petrbenes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int hex_len(int i)
{
	int len;

	len = 0;
	while (i != 0)
	{
		len++;
		i = i / 16;
	}
	return (len - 1);
}

int n_len(int i)
{
	int l;

	l = 1;
	while ((i % 10) != 0)
	{
		l++;
	}
	return (l);
}

char *ft_conversion(int i)
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
			str[c] = (h + 87);
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

	str = ft_conversion(i);
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
