# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bscussel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/22 17:17:04 by bscussel          #+#    #+#              #
#    Updated: 2019/12/04 03:15:22 by bscussel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc -Wall -Wextra -Werror

HEADER = src/ft_printf.h

C_FILES = ./src/ft_printf.c \
			./src/libfunc_0.c \
			./src/libfunc_1.c \
			./src/print_arg.c \
			./src/bum_spec.c \
			./src/character_print.c \
			./src/number_setup.c \
			./src/sgn_nbr.c \
			./src/usort_n_bin.c \
			./src/unsgn_print.c \
			./src/oct_print.c \
			./src/hex_print.c \
			./src/floating_point.c \
			./src/base_conversion.c\

O_FILES = *.o

all: $(NAME)

$(NAME): $(O_FILES)
	ar rc $(NAME) $(O_FILES)
	ranlib $(NAME)

$(O_FILES): $(C_FILES)
	$(CC) -c $(CFLAGS) -I=$(HEADER) $(C_FILES)

clean:
	rm -rf $(O_FILES)

fclean:
	rm -rf $(NAME) $(O_FILES)

re: fclean all

.PHONY: clean fclean all re
