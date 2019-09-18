# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nthrynn <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 16:00:29 by nthrynn           #+#    #+#              #
#    Updated: 2019/09/05 16:00:30 by nthrynn          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./srcs/*.c

HEADERS = ./includes/*.h

OBJ = *.o

all:
		gcc -Wall -Wextra -Werror -I $(HEADERS) -c $(SRCS)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)
		rm $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
