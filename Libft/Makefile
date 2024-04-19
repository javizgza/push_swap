# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 17:13:17 by javi              #+#    #+#              #
#    Updated: 2024/03/07 12:24:38 by jazarago         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_bzero.c		\
	ft_calloc.c			\
	ft_itoa.c			\
	ft_memchr.c			\
	ft_memcmp.c			\
	ft_memcpy.c			\
	ft_memmove.c		\
	ft_memset.c			\
	ft_putchar_fd.c		\
	ft_putendl_fd.c		\
	ft_putnbr_fd.c		\
	ft_putstr_fd.c		\
	ft_split.c			\
	ft_strdup.c			\
	ft_striteri.c		\
	ft_strjoin.c		\
	ft_strmapi.c		\
	ft_strncmp.c		\
	ft_strnstr.c		\
	ft_strrchr.c		\
	ft_strtrim.c		\
	ft_substr.c			\
	ft_toupper.c		\
	ft_tolower.c		\
	ft_strlen.c			\
	ft_strlcpy.c		\
	ft_strlcat.c		\
	ft_atoi.c			\
	ft_isprint.c		\
	ft_isdigit.c		\
	ft_isascii.c		\
	ft_isalpha.c		\
	ft_isalnum.c		\
	ft_strchr.c			\
	ft_printf.c			\
	ft_print_char.c		\
	ft_print_hexa.c		\
	ft_print_int.c		\
	ft_print_ptr.c		\
	ft_print_str.c		\
	ft_print_unsignedint.c	\
	get_next_line_bonus.c \
	get_next_line_utils_bonus.c
	
SRCSB = ft_lstnew_bonus.c		\
	ft_lstadd_front_bonus.c	\
	ft_lstsize_bonus.c		\
	ft_lstlast_bonus.c		\
	ft_lstadd_back_bonus.c	\
	ft_lstclear_bonus.c		\
	ft_lstdelone_bonus.c	\
	ft_lstiter_bonus.c		\
	ft_lstmap_bonus.c
	
NAME = libft.a
OBJS_DIR = objs/
OBJS = $(SRCS:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))
OBJSB = $(SRCSB:.c=.o)
OBJECTS_BONUS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJSB))
CC = gcc
CC_FLAGS = -Wall -Wextra -Werror
$(OBJS_DIR)%.o : %.c libft.h
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	@$(CC) $(CC_FLAGS) -c $< -o $@
$(NAME): $(OBJECTS_PREFIXED)
	@ar rcs $(NAME) $(OBJECTS_PREFIXED)
	@echo "Complete"
all: $(NAME)
clean:
	@rm -rf $(OBJS_DIR)
fclean: clean
	@rm -f $(NAME)
re: fclean all
bonus: $(OBJECTS_BONUS_PREFIXED)
	@ar r $(NAME) $(OBJECTS_BONUS_PREFIXED)
	@echo "Bonus Complete"