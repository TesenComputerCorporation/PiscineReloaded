# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/27 20:48:00 by jjerde            #+#    #+#              #
#    Updated: 2018/11/27 21:00:07 by jjerde           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OBJ = *.o
SOURCE = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
HEADER = includes/*.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c -I$(HEADER) $(SOURCE)
	ar rc $(NAME) $(OBJ)
clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
