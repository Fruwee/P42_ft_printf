/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: petrbenes <petrbenes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:41:20 by petrbenes         #+#    #+#             */
/*   Updated: 2024/06/25 14:47:07 by petrbenes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_ptrlen(uintptr_t num)
{
	int len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void ft_putptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_putptr(num / 16);
		ft_putptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int printptr(unsigned long long ptr)
{

	int print_lenght;

	print_lenght = 0;
	print_lenght += write(1, "0x", 2);
	if (ptr == 0)
		print_lenght += write(1, "0", 1);
	else
	{
		ft_putptr(ptr);
		print_lenght += ft_ptrlen(ptr);
	}
	return (print_lenght);
}
