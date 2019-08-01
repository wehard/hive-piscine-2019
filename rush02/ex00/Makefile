# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkorhone <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/27 18:37:38 by nkorhone          #+#    #+#              #
#    Updated: 2019/07/28 21:55:22 by wkorande         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RUSHMAIN = rush.c

NAME00 = rush-00

NAME01 = rush-01

NAME02 = rush-02

NAME03 = rush-03

NAME04 = rush-04

NAME = colle-2

SRCS = ./srcs/*.c

COLLEMAIN = colle.c

INCL = ./includes

FLAGS = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -o $(NAME) $(COLLEMAIN) $(SRCS) -I $(INCL)

rush:
	@gcc $(FLAGS) -o $(NAME00) $(RUSHMAIN) $(SRCS) -I $(INCL) -DRUSH=0
	@gcc $(FLAGS) -o $(NAME01) $(RUSHMAIN) $(SRCS) -I $(INCL) -DRUSH=1
	@gcc $(FLAGS) -o $(NAME02) $(RUSHMAIN) $(SRCS) -I $(INCL) -DRUSH=2
	@gcc $(FLAGS) -o $(NAME03) $(RUSHMAIN) $(SRCS) -I $(INCL) -DRUSH=3
	@gcc $(FLAGS) -o $(NAME04) $(RUSHMAIN) $(SRCS) -I $(INCL) -DRUSH=4

clean:
	@/bin/rm -f

fclean: clean
	@/bin/rm -f $(NAME)

rclean:
	@/bin/rm -f $(NAME00) $(NAME01) $(NAME02) $(NAME03) $(NAME04)

re: fclean all

rerush: rclean rush