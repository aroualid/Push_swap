# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 17:33:50 by aroualid          #+#    #+#              #
#    Updated: 2024/03/10 02:47:06 by aroualid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS=  -Wall -Wextra -Werror  -g3
SRCS = algo_2_num.c apply_sort_in_a.c count_min_move_b.c move_a-b.c \
			 pars_check_arg.c utils_2.c algo_3_num.c apply_sort_in_b.c len_of_num.c \
			 move_a.c quote_arg.c apply_sort.c count_min_move_a.c main.c move_b.c \
			 utils.c
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

