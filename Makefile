# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abtouait <abtouait@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/27 05:34:55 by abtouait          #+#    #+#              #
#    Updated: 2024/10/31 13:11:33 by abtouait         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isdigit.c ft_atoi.c ft_strlen.c ft_isalpha.c ft_tolower.c ft_toupper.c ft_isalnum.c ft_isascii.c ft_isprint.c

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