/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:58:36 by daoliver          #+#    #+#             */
/*   Updated: 2023/09/08 14:35:33 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	static_ft_point(unsigned long point, int *count)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (*count != -1)
	{
		if (point >= 16 && *count != -1)
			static_ft_point(point / 16, count);
		if (*count != -1 && ft_char(hex[point % 16], count) == -1)
			*count = -1;
	}
}

void	ft_point(unsigned long point, int *count)
{
	ft_string("0x", count);
	static_ft_point(point, count);
}
