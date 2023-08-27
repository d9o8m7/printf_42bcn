/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:33:21 by daoliver          #+#    #+#             */
/*   Updated: 2023/07/14 18:36:50 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	j = dst_len;
	i = 0;
	if (dst_len < size -1 && size > 0)
	{
		while (src[i] && dst_len + i < size -1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dst_len >= size)
		dst_len = size;
	return (dst_len + src_len);
}

/*int	main(void)
{
	char	src[] = "BCN";
	char	dst[] = "52 ";
	size_t	n;
	int		r;

	n = 6;
	r = ft_strlcat(dst, src, n);
	printf("src: %s\n dst: %s\n size: %zu\n return: %d\n", src, dst, n, r);
}*/
