#ifndef FT_PRINTF_H // Directiva de preprocesador para evitar inclusiones múltiples
# define FT_PRINTF_H // Define el símbolo FT_PRINTF_H para asegurar la inclusión única

#include <stdio.h> // Inclusión de la biblioteca estándar de entrada/salida
#include <unistd.h> // Inclusión de la biblioteca para el uso de la función write
#include <stdlib.h> // Inclusión de la biblioteca estándar para funciones generales
#include <stdarg.h> // Inclusión de la biblioteca para el manejo de argumentos variables

// Declaración de funciones utilizadas en el código
int ft_putchar(int c);
int ft_putnbr(int n);
unsigned int ft_putnbrbase(unsigned int n, char *base);
int ft_putstr(char *s);
int ft_strlen(char *s);
unsigned int ft_nosign(unsigned int i);
int ft_putp(unsigned long long i);
int ft_baselong(unsigned long long n, char *base);
int ft_printf(const char *s, ...);

#endif // Fin de la directiva de preprocesador