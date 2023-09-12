/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:12:18 by daoliver          #+#    #+#             */
/*   Updated: 2023/09/12 13:06:43 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	s_str(char c, va_list args, int *count)
{
	if (c == 'c')
		ft_char(va_arg(args, int), count);
	if (c == 's')
		ft_char(va_arg(args, int), count);
	if (c == 'p')
		ft_point(va_arg(args, unsigned long), count);
	if (c == 'u')
		ft_unsigned(va_arg(args, int), count);
	if (c == 'd' || c == 'i')
		ft_number(va_arg(args, int), count);
	if (c == 'x' || c == 'X')
		ft_hexa(va_arg(args, int), count, c);
	if (c == '%')
		ft_char('%', count);
}

int	ft_printf(char const *form, ...)
{
	va_list	args;
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, form);
	while (form[i] && count != -1)
	{
		if (form[i] == '%')
		{
			i++;
			s_str(form[i], args, &count);
			i++;
		}
		else
		{
			ft_char(form[i], &count);
			i++;
		}
	}
	va_end(args);
	return (count);
}

int	main(void)
{
	int	count;

	count = ft_printf("Hello %s\n", "JD");
	ft_printf("The chars written are %d\n", count);
}
