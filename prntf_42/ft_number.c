/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:09:04 by daoliver          #+#    #+#             */
/*   Updated: 2023/09/15 17:59:15 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_number(int number, int *count)
{
	if (number == -2147483648)
	{
		ft_string("-2147483648", count);
		return ;
	}
	if (number < 0)
	{
		ft_char('-', count);
		if (*count == -1)
			return ;
		ft_number(number * -1, count);
		if (*count == -1)
			return ;
	}
	else
	{
		if (number > 9)
			ft_number(number / 10, count);
		if (*count == -1)
			return ;
		ft_char(number % 10 + '0', count);
		if (*count == -1)
			return ;
	}
}
