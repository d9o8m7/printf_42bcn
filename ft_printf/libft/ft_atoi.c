/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:11:02 by daoliver          #+#    #+#             */
/*   Updated: 2023/05/24 13:35:27 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	menos;
	int	numero;

	i = 0;
	menos = 1;
	numero = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		menos = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		numero = numero * 10 + (str[i] - 48);
		i++;
	}
	return (menos * numero);
}

/*int	main(void)
{
	int	numero;
	char	string[20] = "+52 Barcelona";
	//char string[20] = "--123";
	numero = ft_atoi(string);
	printf("\nnumero: %d\n", numero);
}*/
