# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sreis-ma < sreis-ma@student.42porto.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/19 19:49:50 by sreis-ma          #+#    #+#              #
#    Updated: 2023/04/20 15:21:01 by sreis-ma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=-Wall -Werror -Wextra
DEPS=libft.h

SRC=ft_isalpha.c ft_isprint.c ft_memset.c ft_strlen.c ft_bzero.c ft_isascii.c 
ft_memcpy.c ft_strlcat.c ft_strncmp.c ft_isalnum.c ft_isdigit.c ft_memmove.c ft_strlcpy.c

OBJ=$(SRC:.c=.o)

NAME=libft.a

all: $(NAME)
$(NAME): $(OBJ) $(DEPS)
	@ar rs $(NAME) $(OBJ)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all