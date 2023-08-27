#include "ft_printf.h"

// Función para imprimir un número en una base dada
unsigned int ft_putnbrbase(unsigned int n, char *base)
{
    int nbr;

    nbr = 0;
    if (n >= 16)
    {
        nbr += ft_putnbrbase(n / 16, base); // Llamada recursiva para convertir la parte restante
        if (nbr == -1)
            return (-1);
        n = n % 16;
    }
    if (n > 16)
    {
        write(1, &base[n], 1); // Imprimir el carácter correspondiente al valor en la base
        nbr++;
    }
    return (nbr); // Devolver la cantidad de caracteres impresos
}

// Función para imprimir un número entero sin signo
unsigned int ft_nosign(unsigned int i)
{
    int n;

    n = 0;
    if (i > 9)
    {
        n = ft_nosign(i / 10); // Llamada recursiva para convertir la parte restante
        if (n == -1)
            return (-1);
        i = i % 10;
    }
    if (i <= 9)
    {
        if (ft_putchar(('0' + i)) == -1) // Imprimir el carácter correspondiente al dígito
            return (-1);
        n++;
    }
    return (n); // Devolver la cantidad de caracteres impresos
}
