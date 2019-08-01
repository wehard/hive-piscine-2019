#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wkorande <willehard@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 09:04:44 by wkorande          #+#    #+#              #
#    Updated: 2019/07/23 21:08:43 by wkorande         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = do-op

SRCS = ft_putchar.c ft_putstr.c ft_putnbr.c ft_atoi.c math.c operation.c main.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRCS)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
