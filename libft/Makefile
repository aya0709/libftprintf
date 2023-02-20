# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ataira <ataira@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 03:29:42 by ataira            #+#    #+#              #
#    Updated: 2023/02/04 01:29:05 by ataira           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isalpha.c ft_isalnum.c ft_memcpy.c ft_strlen.c ft_isascii.c ft_memmove.c ft_strncmp.c\
ft_atoi.c ft_isdigit.c ft_memset.c ft_strnstr.c ft_bzero.c ft_isprint.c ft_strchr.c ft_substr.c\
ft_strrchr.c ft_memchr.c ft_strlcat.c ft_tolower.c ft_strjoin.c\
ft_memcmp.c ft_strlcpy.c ft_toupper.c ft_calloc.c ft_strdup.c ft_strtrim.c ft_split.c\
ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJS = $(SRCS:.c=.o)
INCDIR  = libft.h
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)
bonus: $(NAME)
$(NAME): $(OBJS)
	ar r $(NAME) $?
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)