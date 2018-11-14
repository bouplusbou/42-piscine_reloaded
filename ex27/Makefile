# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboucher <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 14:16:21 by bboucher          #+#    #+#              #
#    Updated: 2018/11/08 10:21:05 by bboucher         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

IDIR = includes

SDIR = srcs
_SRC = main.c \
		ft_display_file.c \
		ft_putchar.c \
		ft_putstr.c 
SRC = $(patsubst %,$(SDIR)/%,$(_SRC))

OBJ = $(_SRC:.c=.o)

all:
	gcc -Wall -Wextra -Werror -c -I $(IDIR) $(SRC)
	gcc $(OBJ) -o $(NAME) 

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
