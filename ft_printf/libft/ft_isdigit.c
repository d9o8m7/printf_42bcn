/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:22:28 by daoliver          #+#    #+#             */
/*   Updated: 2023/05/01 16:23:18 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 48-0 to 57-9

#include "libft.h"
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	char d;
	printf("Write a char to check if digit:\n");
	scanf("%c", &d);
	printf("Result of '%c' is: %d\n", d, ft_isdigit(d));
}*/
