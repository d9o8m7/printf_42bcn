/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 18:13:51 by daoliver          #+#    #+#             */
/*   Updated: 2023/05/02 11:21:05 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// from 0 to 127

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*int	main(void)
{
	char c;
	printf("Write a char to know if ASCII\n");
	scanf("%c", &c);
	printf("The char '%c': %d\n", c, ft_isacii(c));
}*/
