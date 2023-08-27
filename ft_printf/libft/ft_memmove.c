/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:32:03 by daoliver          #+#    #+#             */
/*   Updated: 2023/06/30 18:27:14 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (!dst && !src)
		return (dst);
	if (dst > src)
	{
		i = (int)len -1;
		while (i >= 0)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/*int	main(void)
{
	char	dst[] = "Art is comming from the future";
	char	src[] = "52 is builing the future";
	size_t	n;

	n = 6;
	ft_memmove(dst, src, n);
	printf("main:\n dst: %s\n len: %zu\n", dst, src, n);
}*/
