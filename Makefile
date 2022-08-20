# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isalgar <isalgar@student.42istanbul.com.t  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/18 20:33:51 by isalgar           #+#    #+#              #
#    Updated: 2022/08/20 01:07:58 by isalgar          ###   ########.tr        #
#                                                                              #
# **************************************************************************** #

CFLAGSS = -Wall -Wextra -Werror
SRCS = main.c	set_struct.c	push.c	swap.c	rotate.c reverse_rotate.c	control.c	radix.c	buble.c	three_arg_sort.c	four_arg_sort.c	five_arg_sort.c one_arg_sort.c	ft_atol.c
OBJS = $(SRCS:.c=.o)
NAME = push_swap
CC = gcc
LIB = ./libft/libft.a
S = 0
E = 500

all: $(NAME)

$(NAME) : $(LIB)  $(OBJS)
	gcc $(OBJS) -g ./libft/libft.a -o $(NAME)

$(LIB) :
	@make bonus -sC ./libft
	@echo "libft compiled."

.c.o:
	$(CC) $(CFLAGSS) -c $< -o $@ -g

clean:
	rm -rf $(OBJS) $(NAME)

fclean: clean
	make fclean -sC ./libft

re: clean all

norm:
	@norminette *.[ch]
	@norminette ./libft/*.[ch]

vis: re
	python3 pyviz.py `ruby -e "puts ($(S)..$(E)).to_a.shuffle.join(' ')"`

.PHONY: clean re fclean norm all vis
