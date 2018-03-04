# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maljean <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 21:55:54 by maljean           #+#    #+#              #
#    Updated: 2017/11/09 21:58:28 by maljean          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = srcs/main.c srcs/ft_cat.c srcs/ft_putchar.c srcs/ft_putstr.c  srcs/ft_puterror.c

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean:
		/bin/rm -f main.o ft_cat.o ft_putchar.o ft_putstr.o ft_puterror.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
