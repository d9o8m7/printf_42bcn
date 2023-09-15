# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 15:08:28 by daoliver          #+#    #+#              #
#    Updated: 2023/09/15 17:39:54 by daoliver         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COMPILER RULES NAME HEADER OUTPUT & FLAGS
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
AR = ar rcs
RM = rm -f
HEADER = ft_printf.h

## SOURCE FUNCTIONS
SRCS = ft_printf.c ft_char.c ft_hexa.c ft_number.c ft_point.c \

OBJS = $(SRCS:.c=.o)

## ALL COMPILE
all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

%.o: %.c $(HEADER) Makefile
				$(CC) $(CFLAGS) -c $< -o $@

## CLEANING
clean:
				$(RM) $(OBJS)

fclean: clean
				$(RM) $(NAME)

## RECOMPILE
re: fclean all

## WILDCARDS
.PHONY: all clean fclean re
