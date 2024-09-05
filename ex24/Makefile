# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjilaias <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/10 16:06:37 by fjilaias          #+#    #+#              #
#    Updated: 2024/05/10 16:06:46 by fjilaias         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS_DIR = srcs
INCLUDES_DIR = includes

SRCS = $(SRCS_DIR)/ft_putchar.c \
       $(SRCS_DIR)/ft_putstr.c \
       $(SRCS_DIR)/ft_strcmp.c \
       $(SRCS_DIR)/ft_strlen.c \
       $(SRCS_DIR)/ft_swap.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^
	ranlib $@

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

