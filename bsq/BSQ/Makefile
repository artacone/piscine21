# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvertie <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/31 15:21:27 by rvertie           #+#    #+#              #
#    Updated: 2021/02/09 21:07:01 by ieddard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= bsq

SRC_DIR		= ./srcs/

OBJ_DIR		= ./objs/

HEADER_DIR	= ./includes/

SRCS		= $(wildcard $(SRC_DIR)*.c)

HEADERS		= $(wildcard $(HEADER_DIR)*.h)

OBJS		= $(addprefix $(OBJ_DIR), $(notdir $(SRCS:.c=.o)))

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f


.PHONY: all clean fclean re norm test

all: $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(HEADERS) | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

re: fclean $(OBJ_DIR) all 

norm:
	norminette -R CheckForbiddenSourceHeader $(SRCS) 
	norminette -R CheckDefine $(HEADERS)

test: all
	./test.sh
