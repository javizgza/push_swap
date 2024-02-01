# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javi <javi@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/29 18:39:54 by jazarago          #+#    #+#              #
#    Updated: 2024/02/01 10:03:40 by javi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = push_swap.c	\
		ft_algfourandfive.c \
		ft_checkingisvalid.c \
		ft_checkingtheargs.c \
		ft_duplicatenum.c \
		ft_finds.c \
		ft_freethepush.c \
		ft_getindexpos.c \
		ft_manymoves.c \
		ft_newstack.c \
		ft_ordercheck.c \
		ft_parsethearguments.c \
		ft_resolve.c \
		ft_resolvebignums.c \
		ft_write_error.c \
		listing_numbers.c \
		movesa.c \
		movesb.c \
		movesboth.c \
		libft_functions.c \

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME) : $(OBJ) push_swap.h
				@ar rc $(NAME) $(OBJ)

clean:
	@$(RM)$(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY = all clean fclean re