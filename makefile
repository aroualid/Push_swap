# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 17:33:50 by aroualid          #+#    #+#              #
#    Updated: 2024/03/17 05:13:09 by aroualid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIGHT_RED=\033[1;31m
LIGHT_GREEN=\033[1;32m
LIGHT_YELLOW=\033[1;33m
LIGHT_BLUE=\033[1;34m
LIGHT_MAGENTA=\033[1;35m
LIGHT_CYAN=\033[1;36m
WHITE=\033[1;37m
LIGHT_GRAY=\033[0;37m
DARK_GRAY=\033[1;30m
LIGHT_PURPLE=\033[1;35m

CC = cc
CFLAGS=  -Wall -Wextra -Werror  -g3
SRCS = move_a.c move_a-b.c move_b.c \
	   count_min_move_a.c count_min_move_b.c \
	   apply_sort.c apply_sort_in_a.c apply_sort_in_b.c \
	   algo_2_num.c algo_3_num.c \
	   utils.c utils_2.c len_of_num.c free_func.c \
	   pars_check_arg.c quote_arg.c \
	   main.c
OBJS = $(SRCS:%.c=%.o)
NAME = push_swap
RM = rm -f
LIBFT_PATH = libft

.PHONY: all clean fclean re libft

all: libft $(NAME)

$(NAME): $(OBJS) 
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L$(LIBFT_PATH) -lft

libft:
	$(MAKE) -C $(LIBFT_PATH)

clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT_PATH) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_PATH) fclean

re: fclean all

