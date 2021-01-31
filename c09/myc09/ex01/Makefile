# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvertie <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/31 15:21:27 by rvertie           #+#    #+#              #
#    Updated: 2021/01/31 18:30:28 by rvertie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRC_DIR		= ./srcs/

HEADER_DIR	= ./includes/

SRCS		= $(wildcard ${SRC_DIR}*.c)

HEADERS		= $(wildcard ${HEADER_DIR}*.h)

OBJS		= ${SRCS:.c=.o}

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f


.PHONY: all clean fclean re

all: $(NAME)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o} 

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
