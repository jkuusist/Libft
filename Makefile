# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/18 11:12:39 by jkuusist          #+#    #+#              #
#    Updated: 2020/02/17 14:18:25 by jkuusist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_isascii.c ft_isalnum.c ft_isdigit.c ft_isalpha.c ft_isprint.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_memcmp.c ft_memchr.c ft_memcpy.c ft_itoa.c ft_memalloc.c ft_memdel.c ft_memccpy.c ft_putchar.c ft_putendl.c ft_memset.c ft_putendl_fd.c ft_putchar_fd.c ft_memmove.c ft_putnbr.c ft_putstr_fd.c ft_putnbr_fd.c ft_putstr.c ft_strcat.c ft_strclr.c ft_strdel.c ft_strcpy.c ft_strchr.c ft_strequ.c ft_strdup.c ft_strcmp.c ft_striter.c ft_strjoin.c ft_striteri.c ft_strmapi.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strnequ.c ft_strncmp.c ft_strncat.c ft_strnew.c ft_strncpy.c ft_strrchr.c ft_strnstr.c ft_strsub.c ft_toupper.c ft_tolower.c ft_strtrim.c ft_strstr.c ft_strsplit.c ft_pow.c ft_strrev.c ft_itoa_base.c ft_strupper.c ft_strlower.c 

OBJ = ft_atoi.o ft_bzero.o ft_isascii.o ft_isalnum.o ft_isdigit.o ft_isalpha.o ft_isprint.o ft_lstnew.o ft_lstdelone.o ft_lstdel.o ft_lstadd.o ft_lstiter.o ft_lstmap.o ft_memcmp.o ft_memchr.o ft_memcpy.o ft_itoa.o ft_memalloc.o ft_memdel.o ft_memccpy.o ft_putchar.o ft_putendl.o ft_memset.o ft_putendl_fd.o ft_putchar_fd.o ft_memmove.o ft_putnbr.o ft_putstr_fd.o ft_putnbr_fd.o ft_putstr.o ft_strcat.o ft_strclr.o ft_strdel.o ft_strcpy.o ft_strchr.o ft_strequ.o ft_strdup.o ft_strcmp.o ft_striter.o ft_strjoin.o ft_striteri.o ft_strmapi.o ft_strlcat.o ft_strlen.o ft_strmap.o ft_strnequ.o ft_strncmp.o ft_strncat.o ft_strnew.o ft_strncpy.o ft_strrchr.o ft_strnstr.o ft_strsub.o ft_toupper.o ft_tolower.o ft_strtrim.o ft_strstr.o ft_strsplit.o ft_pow.o ft_strrev.o ft_itoa_base.o ft_strupper.o ft_strlower.o

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	ar rc libft.a $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ) 
	
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
