#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wkorande <willehard@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 09:04:44 by wkorande          #+#    #+#              #
#    Updated: 2019/07/26 11:39:48 by wkorande         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_cat

SRCS = ft_utils.c ft_cat.c

INCL = ./

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) -I $(INCL) $(SRCS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
