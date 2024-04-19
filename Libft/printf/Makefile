# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 17:06:14 by javi              #+#    #+#              #
#    Updated: 2023/11/19 16:56:08 by jazarago         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c	\
	ft_print_char.c	\
	ft_print_hexa.c	\
	ft_print_int.c	\
	ft_print_ptr.c	\
	ft_print_str.c	\
		ft_print_unsignedint.c

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

all: $(NAME)

$(NAME) : $(OBJ) ft_printf.h
		@ar rc $(NAME) $(OBJ)

clean:
	@$(RM) $(OBJ)
fclean: clean
	@$(RM) $(NAME)
		
re: fclean all
