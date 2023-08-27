/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:11:01 by daoliver          #+#    #+#             */
/*   Updated: 2023/07/14 18:38:46 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*sr;

	sr = (unsigned char *)str;
	while (n)
	{
		if (*sr == (unsigned char)c)
			return (sr);
		else
			sr++;
		n--;
	}
	return (NULL);
}
