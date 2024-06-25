/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: petrbenes <petrbenes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:11:31 by pbenes            #+#    #+#             */
/*   Updated: 2024/06/20 13:44:24 by petrbenes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the character ’c’ to the given file descriptor.
** "file descriptor" For example, if you want to write a character to the
** standard output (which is usually your terminal), you would use the file
** descriptor 1. If you want to write to the standard error, you would use the
** file descriptor 2.
*/

#include "ft_printf.h"

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
