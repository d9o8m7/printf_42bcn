/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:30:22 by daoliver          #+#    #+#             */
/*   Updated: 2023/09/15 17:54:27 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char(char c, int *count)
{
	int	result;

	result = 0;
	if (*count != -1)
		result = write(1, &c, 1);
	if (result == -1)
	{
		*count = -1;
		return (-1);
	}
	else
		*count += 1;
	return (*count);
}

void	ft_string(char *str, int *count)
{
	size_t	i;

	i = 0;
	if (!str || str == NULL)
	{
		ft_string("(null)", count);
		return ;
	}
	while (str[i] != '\0' && *count != -1)
	{
		ft_char(str[i], count);
		i++;
	}
}
