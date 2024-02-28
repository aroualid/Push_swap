# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ari <ari@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 17:33:50 by aroualid          #+#    #+#              #
#    Updated: 2024/02/28 13:44:32 by aroualid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS=  -Wall -Wextra -Werror  -g3
SRCS = move_a.c pars_check_arg.c quote_arg.c len_of_num.c \
	   move_a-b.c move_b.c utils.c main.c algo_2_num.c algo_3_num.c
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

