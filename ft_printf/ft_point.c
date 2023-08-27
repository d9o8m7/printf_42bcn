#include <unistd.h> // Necesario para la función write

// Función recursiva para convertir un número entero largo sin signo a una base dada
unsigned long long ft_baselong(unsigned long long n, char *base)
{
    long long nbr;

    nbr = 0;
    if (n >= 16)
    {
        nbr += ft_baselong(n / 16, base); // Llamada recursiva para convertir la parte restante
        if (nbr == -1)
            return (-1);
        n = n % 16;
    }
    if (n < 16)
    {
        write(1, &base[n], 1); // Imprimir el carácter correspondiente al valor
        nbr++;
    }
    return (nbr);
}

// Función para imprimir un número entero largo sin signo en formato hexadecimal
int ft_putp(unsigned long long i)
{
    if (write(1, "0x", 2) != 2) // Escribir "0x" en la salida estándar
        return (-1);
    return (ft_baselong(i, "0123456789abcdef") + 2); // Llamar a la función de conversión
}
