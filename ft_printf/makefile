# Nombre del archivo de salida
NAME = libftprint.a

# Lista de archivos fuente
SRCS = ft_hexa.c ft_point.c ft_printf.c ft_utils.c

# Archivos de inclusión
INCLUDE = ft_printf.h 

# Compilador y opciones de compilación
CC = gcc 
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

# Regla para compilar un archivo fuente en un archivo objeto
%.o: %.c $(INCLUDE)
	@echo COMPILANDO...
	@$(CC) $(CFLAGS) -c $< -o $@

# Lista de archivos objeto
OBJS = $(SRCS:.c=.o)

# Regla para construir el archivo de salida (librería estática)
$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo $(NAME) creado

# Regla para limpiar los archivos objeto
clean:
	@$(RM) $(OBJS)
	@echo Todos los objetos limpiados exitosamente 

# Regla para limpiar los archivos objeto y el archivo de salida
fclean: clean
	@$(RM) $(NAME)
	@echo Objetos y ejecutable eliminados

# Regla para reconstruir todo
re: fclean all

# Objetivos especiales que no representan archivos
.PHONY: all clean re fclean