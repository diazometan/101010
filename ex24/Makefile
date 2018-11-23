# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lwyl-the <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 15:07:01 by lwyl-the          #+#    #+#              #
#    Updated: 2018/11/20 15:07:03 by lwyl-the         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: libft
libft:
	gcc -I includes/ -c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
	ar -rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib libft.a
clean:
	rm -rf  ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
fclean:
	rm -rf libft.a
re: fclean all