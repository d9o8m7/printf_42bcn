/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:18:01 by daoliver          #+#    #+#             */
/*   Updated: 2023/09/08 15:09:12 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa(int n, int *count, char c)
{
	char			*hex_min;
	char			*hex_may;
	unsigned int	number;

	hex_min = "0123456789abcdef";
	hex_may = "0123456789ABCDEF";
	number = (unsigned int)n;
	if (number >= 16 && *count != -1)
		ft_hexa(number / 16, count, c);
	if (c == 'x')
	{
		if (*count != -1 && ft_char (hex_min[number % 16], count) == -1)
			*count = -1;
	}
	if (c == 'X')
	{
		if (*count != -1 && ft_char(hex_may[number % 16], count) == -1)
			*count = -1;
	}
}

void	ft_unsigned(unsigned int u, int *count)
{
	if (u >= 10)
	{
		ft_unsigned(u / 10, count);
		if (*count == -1)
			return ;
	}
	ft_char(u % 10 + '0', count);
	if (*count == -1)
		return ;
}
