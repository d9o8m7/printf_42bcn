#include "ft_printf.h"

// Función para imprimir un carácter
int ft_putchar(int c)
{
    if (write(1, &c, 1) != 1) // Escribir el carácter en la salida estándar
        return (-1);
    return (1); // Devolver la cantidad de caracteres escritos (1)
}

// Función para calcular la longitud de una cadena
int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i]) // Recorrer la cadena hasta encontrar el final ('\0')
        i++;
    return (i); // Devolver la longitud de la cadena
}

// Función para imprimir una cadena
int ft_putstr(char *s)
{
    size_t i;

    i = 0;
    if (!s) // Si la cadena es nula
    {
        return (write(1, "(null)", 6)); // Imprimir "(null)"
    }
    while (s[i]) // Recorrer la cadena
    {
        if (write(1, &s[i], 1) != 1) // Escribir el carácter en la salida estándar
            return (-1);
        i++;
    }
    return (i); // Devolver la cantidad de caracteres escritos (longitud de la cadena)
}

// Función para imprimir el número mínimo representable en entero (int)
static int minint(int n)
{
    (void) n;
    if (write(1, "-2147483648", 11) != 11) // Imprimir el número mínimo
        return (-1);
    return (11); // Devolver la cantidad de caracteres escritos (11)
}

// Función para imprimir un número entero (int)
int ft_putnbr(int n)
{
    int nbr;

    nbr = 0;
    if (n == -2147483648) // Manejo especial para el número mínimo
        return (minint(n));
    if (n < 0 && ++nbr)
    {
        if (write(1, "-", 1) != 1) // Imprimir el signo '-' para números negativos
            return (-1);
        n = -n;
    }
    if (n > 9)
    {
        nbr += ft_putnbr(n / 10); // Llamada recursiva para imprimir las cifras
        if (nbr == -1)
            return (-1);
        n = n % 10;
    }
    return (nbr);
}
