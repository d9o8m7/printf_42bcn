#include "ft_printf.h"

// Función para manejar los argumentos de formato
int ft_args(const char *s, va_list ac)
{
    if (*(s + 1) == '%')
        return (write(1, (const void *)(s + 1), 1)); // Imprimir un solo carácter '%'
    else if (*(s + 1) == 'c')
        return (ft_putchar(va_arg(ac, int))); // Imprimir un carácter (char)
    else if (*(s + 1) == 's')
        return (ft_putstr(va_arg(ac, char *))); // Imprimir una cadena (string)
    else if (*(s + 1) == 'i' || (*(s + 1) == 'd'))
        return (ft_putnbr(va_arg(ac, int))); // Imprimir un número entero (int)
    else if (*(s + 1) == 'x')
        return (ft_putnbrbase(va_arg(ac, unsigned int), ("0123456789abcdef"))); // Imprimir un número en base hexadecimal minúscula
    else if (*(s + 1) == 'X')
        return (ft_putnbrbase(va_arg(ac, unsigned int), ("0123456789ABCDEF"))); // Imprimir un número en base hexadecimal mayúscula
    else if (*(s + 1) == 'u')
        return (ft_nosign(va_arg(ac, unsigned int))); // Imprimir un número entero sin signo (unsigned int)
    else if (*(s + 1) == 'p')
        return (ft_putp(va_arg(ac, unsigned long long))); // Imprimir un puntero (dirección de memoria)
    return (0);
}

// Función principal para la impresión formateada
int ft_printf(const char *s, ...)
{
    int c;
    va_list ac; // Declaración de la lista de argumentos variables

    c = 0;
    va_start(ac, s); // Iniciar la lista de argumentos variables con el primer argumento (s)
    while (*s != '\0')
    {
        if (*s == '%') // Si se encuentra un '%' indica que hay un formato
        {
            c = c + ft_args(s, ac); // Llamar a la función de manejo de argumentos
            s++;
            s++;
        }
        else
        {
            c = c + ft_putchar(*s); // Imprimir el carácter tal cual
            s++;
        }
    }
    va_end(ac); // Finalizar el uso de la lista de argumentos variables
    return (c); // Devolver la cantidad total de caracteres impresos
}
