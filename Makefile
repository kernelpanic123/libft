# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/27 05:34:55 by abtouait          #+#    #+#              #
#    Updated: 2024/11/22 13:47:48 by abtouait         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isdigit.c ft_atoi.c ft_strlen.c ft_isalpha.c ft_tolower.c ft_toupper.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_bzero.c ft_memset.c ft_memchr.c

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all:	$(NAME)

.c.o:
	gcc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	chmod 700 $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 