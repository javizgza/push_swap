# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 16:22:01 by jazarago          #+#    #+#              #
#    Updated: 2024/07/09 11:22:38 by jazarago         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

LIB = ar rcs

SRCS = program_main.c sorts_2.c utils.c atoi_utils.c sorts.c set_positions.c num_node_utils.c \
		node_utils.c operations/moves_utils.c operations/moves_a.c operations/moves_b.c operations/moves_both.c ft_validations.c \
			stack/stack_utils_2.c stack/stack_utils.c stack/stack.c Libft/ft_atoi.c Libft/ft_split.c \
				Libft/ft_calloc.c Libft/ft_bzero.c Libft/ft_isdigit.c Libft/ft_substr.c Libft/ft_strlen.c Libft/ft_strdup.c Libft/ft_strlcpy.c\

OBJTS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJTS)

clean:
	$(RM) $(OBJTS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(OBJTS)

re: fclean all

.PHONY: all clean fclean re