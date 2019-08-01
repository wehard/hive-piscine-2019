NAME		= bsq
CC			= gcc
INCLUDES	= includes
CFLAGS		= -Wall -Wextra -Werror
SRCS		= srcs/bsq_map.c \
srcs/bsq_map_helper.c \
srcs/bsq_map_info.c \
srcs/bsq_map_solve.c \
srcs/ft_list/ft_create_elem.c \
srcs/ft_list/ft_list_at.c \
srcs/ft_list/ft_list_clear.c \
srcs/ft_list/ft_list_push_back.c \
srcs/ft_list/ft_list_size.c \
srcs/ft_nbr_functions.c \
srcs/ft_str_functions.c \
srcs/io.c \
srcs/main.c \
srcs/sum_map.c \
srcs/sum_map_helper.c \
srcs/validator.c \
srcs/validate_helpers.c \
srcs/io_helper.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -I $(INCLUDES) -o $(NAME) $(SRCS) -O3

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
