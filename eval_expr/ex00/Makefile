#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wkorande <willehard@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 09:04:44 by wkorande          #+#    #+#              #
#    Updated: 2019/07/28 19:50:54 by wkorande         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = eval_expr

SRCS = ./srcs/eval_expr.c ./srcs/ft_functions.c

INCL = ./includes

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) -I $(INCL) $(SRCS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
