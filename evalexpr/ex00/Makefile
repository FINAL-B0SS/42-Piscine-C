# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maljean <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/11 19:07:05 by maljean           #+#    #+#              #
#    Updated: 2017/11/11 23:54:32 by maljean          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_helper.c srcs/eval_expr.c

HEADER = headers/ft_header.h

FLAGS = -Wall -Wextra -Werror

NAME = eval_expr

OBJ = ft_helper.o eval_expr.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I $(HEADER)
	gcc $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
