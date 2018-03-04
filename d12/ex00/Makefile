# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maljean <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 21:44:51 by maljean           #+#    #+#              #
#    Updated: 2017/11/09 21:44:53 by maljean          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = srcs/ft_display_file.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/main.c 

all: $(NAME)

$(NAME): 
	gcc -o $(NAME) $(SRC)

clean:
	/bin/rm -f main.o ft_display_file.o ft_putchar.o ft_putstr.o main.o

fclean: clean
			/bin/rm -f $(NAME)

re: fclean all

