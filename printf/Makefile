# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: petrbenes <petrbenes@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/17 13:39:59 by petrbenes         #+#    #+#              #
#    Updated: 2024/06/25 14:50:42 by petrbenes        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

SOURCES = \
	ft_printf.c printchar.c printdigit.c printhexl.c printhexu.c printpercent.c \
	printptr.c printstring.c printunsd.c ft_putchar_fd.c ft_putchar.c \
	suportfunc.c


OBJECTS = ${SOURCES:.c=.o}

NAME = libftprintf.a


all: ${NAME}

.c.o:
	cc $(CFLAGS) $< -o ${<:.c=.o}

${NAME}: ${OBJECTS}
	ar rcs ${NAME} ${OBJECTS}

clean:
	rm -f ${OBJECTS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
