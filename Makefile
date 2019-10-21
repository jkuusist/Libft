# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/18 11:12:39 by jkuusist          #+#    #+#              #
#    Updated: 2019/10/18 12:51:26 by jkuusist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = strlen.c strdup.c strcpy.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	ar rc libft.a strlen.o strdup.o strcpy.o
	ranlib $(NAME)

clean:
	/bin/rm -f strlen.o strdup.o strcpy.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
