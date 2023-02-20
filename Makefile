# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 03:29:42 by ataira            #+#    #+#              #
#    Updated: 2023/02/19 22:30:29 by ataira           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFTS = libft/
SRCS = ft_printf.c util.c counter.c
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(OBJS)
	make -C $(LIBFTS)
	cp $(LIBFTS)libft.a .
	mv libft.a $(NAME)
	ar r $(NAME) $^
clean:
	make fclean -C $(LIBFTS)
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)