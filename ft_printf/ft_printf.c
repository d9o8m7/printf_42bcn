/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:12:18 by daoliver          #+#    #+#             */
/*   Updated: 2023/08/28 16:06:38 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "ft_printf.h"*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	print_char(int c)
{
	return (write(1, &c, 1));
}

int	print_str(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		print_char((int)*str);
		++count;
		++str;
	}
	return (count);
}

/*HEXA MISSING*/

int	print_form(char spec, va_list ap)
{
	int	count;

	count = 0;
	if (spec == 'c')
		count += print_char(va_arg(ap, int));
	else if (spec == 's')
		count += print_str(va_arg(ap, char *));
	else if (spec == 'd')
		count += print_digit(va_arg(ap, int), 10);
	else if (spec == 'x')
		count += print_digit(va_arg(ap, unsigned int), 16);
	else
		count += write(1, &spec, 1);
	return (count);
}

int	ft_printf(char const *form, ...)
{
	va_start	ap;

	va_start(ap, form);
	count = 0;
	while (*form != '\0')
	{
		if (*form == '%')
			count += print_form(*++form, ap);
		else
			count += write(1, form, 1);
		++form;
	}
	va_end(ap);
	return (count);
}

int	main(void)
{
	int	count;

	count = my_printf("Hello %s\n", "JD");
	my_printf("The chars written are %d\n", count);
}
