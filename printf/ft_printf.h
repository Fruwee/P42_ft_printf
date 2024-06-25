/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: petrbenes <petrbenes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:46:57 by petrbenes         #+#    #+#             */
/*   Updated: 2024/06/25 15:03:32 by petrbenes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

// main functions
int ft_printf(const char *format, ...);
int ft_formats(va_list args, const char format);
char printchar(char *ch);
int printstring(char *s);
int printptr(unsigned long long ptr);
int printdigit(int d);
int printunsd(int d);
int printhexu(int i);
int printhexl(int i);
char printpercent(void);

// auxiliary functions
char *ft_conversionl(int i);
char *ft_conversionu(int i);
int hex_len(int i);
int ft_ptrlen(uintptr_t num);
void ft_putptr(uintptr_t num);
int ft_putchar(int c);
void ft_putchar_fd(char c, int fd);
char ft_printchar(char *ch);
int n_len(int i);
int numlen(int d);

#endif
