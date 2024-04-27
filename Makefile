# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 16:22:01 by jazarago          #+#    #+#              #
#    Updated: 2024/04/27 10:42:21 by jazarago         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

LIB = ar rcs

SRCS = program.c arg_checks.c big_sort_radix.c create_b.c error_msg.c \
		free_functions.c moves_a.c moves_b.c moves_both.c parse.c \
			small_sorts.c utils.c Libft/ft_atoi.c Libft/ft_split.c \
				Libft/ft_calloc.c Libft/ft_bzero.c Libft/ft_isdigit.c \

OBJTS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJTS)

clean:
	$(RM) $(OBJTS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(OBJTS)

re: all clean

.PHONY: all clean fclean re