#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wkorande <willehard@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 09:04:44 by wkorande          #+#    #+#              #
#    Updated: 2019/07/23 20:54:33 by wkorande         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_advanced_do-op

SRCS = ft_functions.c math.c main.c

INCL = ./

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) -I $(INCL) $(SRCS)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
