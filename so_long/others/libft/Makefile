# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 13:25:59 by ftumay            #+#    #+#              #
#    Updated: 2022/03/29 14:18:30 by ftumay           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a
CC 	:= gcc
CFLAGS	:= -Wall -Wextra -Werror -I. -c
FILES	:= $(shell find . -type f ! -name "ft_lst*.c" -name "ft_*.c")
OBJ		:= $(FILES:%.c=%.o)

BSRC	:= $(wildcard ft_lst*.c)
B_OBJ	:= $(BSRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(B_OBJ)
	ar -rcs $(NAME) $(OBJ) $(B_OBJ)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
