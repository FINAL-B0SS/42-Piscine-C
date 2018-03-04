# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maljean <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/12 14:30:40 by maljean           #+#    #+#              #
#    Updated: 2017/11/12 17:40:05 by maljean          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= rush-2
FILE 	= ft_strcmp.c rush00s.c ft_generate.c ft_put.c
MAIN 	= srcs/rush_2.c
LIB 	= libft.a
CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror -I includes
AR 		= ar

SRCS 	= $(addprefix srcs/, $(FILE))
OBJS	= $(addprefix build/, $(FILE:.c=.o))

all: $(LIB) $(NAME)

build:
	mkdir build/

$(NAME): $(MAIN)
		$(CC) $(CFLAGS) $(MAIN) $(LIB) -o $@
		$(CC) $(CFLAGS) -o rush-00 srcs/rush_00.c srcs/main.c $(LIB)
		$(CC) $(CFLAGS) -o rush-01 srcs/rush_01.c srcs/main.c $(LIB)
		$(CC) $(CFLAGS) -o rush-02 srcs/rush_02.c srcs/main.c $(LIB)
		$(CC) $(CFLAGS) -o rush-03 srcs/rush_03.c srcs/main.c $(LIB)
		$(CC) $(CFLAGS) -o rush-04 srcs/rush_04.c srcs/main.c $(LIB)

$(LIB): $(OBJS)
		$(AR) crs $@ $(OBJS)
		
build/%.o: srcs/%.c | build
	$(CC) $(CFLAGS) -o $@ -c $^

clean:
		rm -rf build/

rclean: clean
		rm -rf rush-00 rush-01 rush-02 rush-03 rush-04

lclean: rclean
		rm -rf $(LIB)

fclean: lclean
		rm -f $(NAME)

re: fclean all
