# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvertie <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/31 15:21:27 by rvertie           #+#    #+#              #
#    Updated: 2021/02/02 00:21:20 by rvertie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ft_display_file

SRC_DIR		= ./srcs/

OBJ_DIR		= ./objs/

HEADER_DIR	= ./includes/

SRCS		= $(wildcard $(SRC_DIR)*.c)

HEADERS		= $(wildcard $(HEADER_DIR)*.h)

OBJS		= $(addprefix $(OBJ_DIR), $(notdir $(SRCS:.c=.o)))

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f


.PHONY: all clean fclean re

all: $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
