
## Name Output File, Compiler & Flags
NAME:= libft.a
HEADER:= libft.h
CC:= gcc
CFLAGS:= -Wall -Wextra -Werror -I .
RM:= rm -f

## Sources of Functions
SRC:= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	  ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
	  ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
	  ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c  ft_strchr.c \
	  ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
	  ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	  ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \

SRCBONUS:= ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstsize.c ft_lstlast.c \
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \

OBJS:= $(SRC:.c=.o)
OBJSBONUS = $(SRCBONUS:.c=.o)
$(info $(SRC)$(SRCBONUS))

## Compiles everything in one comand
all: $(OBJS) $(NAME)

## Create a static library archive file (.a) from compiled object files
$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJSBONUS)
		ar -rc $(NAME) $(OBJS) $(OBJSBONUS)
		@touch bonus
		@echo bonus compliled

## Compiling Rules .c file into its .o for the final library archive 
%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

## Cleaning up object files
clean:
		$(RM) $(OBJS) $(OBJSBONUS)
fclean: clean
		$(RM) $(NAME)

## Recompile everything from scratch
re: fclean all

.PHONY: all clean fclean re
