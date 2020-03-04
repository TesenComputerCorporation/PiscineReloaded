# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/27 21:22:17 by jjerde            #+#    #+#              #
#    Updated: 2018/11/27 21:22:27 by jjerde           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
OBJ = *.o
SOURCE = *.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c -I. $(SOURCE)
	gcc -o $(NAME) $(OBJ)
clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
