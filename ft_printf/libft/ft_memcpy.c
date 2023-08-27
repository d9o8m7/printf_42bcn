/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:31:07 by daoliver          #+#    #+#             */
/*   Updated: 2023/07/14 18:38:08 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/*int	main(void)
{
	size_t	n;
	char 	src[] = "52BCN is the future";
	char	dst[] = "Art is... comming from futuro";

	n = 6;
	printf("Original: %s\n", dst);
	ft_memcpy(dst, src, n);
	ft_memcpy(((void *)0), ((void *)0), 3);
	printf("After ft_memcpy: %s\n", dst);
}*/
