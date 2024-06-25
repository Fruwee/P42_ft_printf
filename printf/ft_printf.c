/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: petrbenes <petrbenes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 12:42:20 by petrbenes         #+#    #+#             */
/*   Updated: 2024/06/25 14:41:27 by petrbenes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// empty value needs to be sorted out on the level of "main" function

#include "ft_printf.h"

int ft_formats(va_list args, const char format)
{
	int print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_putchar(va_arg(args, int));
	else if (format == 's')
		print_length += printstring(va_arg(args, char *));
	else if (format == 'p')
		print_length += printptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_length += printdigit(va_arg(args, int));
	else if (format == 'u')
		print_length += printunsd(va_arg(args, unsigned int));
	else if (format == 'x')
		print_length += printhexl(va_arg(args, unsigned int));
	else if (format == 'X')
		print_length += printhexu(va_arg(args, unsigned int));
	else if (format == '%')
		print_length += printpercent();
	return (print_length);
}

int ft_printf(const char *str, ...)
{
	int i;
	va_list args;
	int print_length;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_length += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			print_length += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}
