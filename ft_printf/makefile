# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 15:08:28 by daoliver          #+#    #+#              #
#    Updated: 2023/09/12 12:40:30 by daoliver         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## Name OUT FILE, Compiler & Flags
NAME:= libftprint.a
HEADER:= ft_printf.h
CC:= cc
CFLAGS:= -Wall -Werror -Wextra -I.
RM:= rm -f
AR:= ar rcs

## CC RULES
%.o: %.c $(HEADER) makefile
	@$(CC) $(FLAGS) -c $< -o $@

## SOURCE FUNCTIONS
SRC:= ft_char.c ft_hexa.c ft_number.c ft_point.c ft_printf.c \

OBJS:= $(SRC:.c=.o)
$(info $(SRC))

## ALL COMPILE
all: $(OBJS) $(NAME)

## STAT_LIB_ARCH from .o
$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

## CLEANING
clean:
		$(RM) $(OBJS)

fclean : clean
		$(RM) $(NAME)

## RECOMPILE
re: fclean all

## WILDCARDS
.PHONY: all clean fclean re
