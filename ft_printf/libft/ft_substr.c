/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:41:04 by daoliver          #+#    #+#             */
/*   Updated: 2023/05/23 14:04:22 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	len_s;

	len_s = ft_strlen(s);
	if (len > (len_s - start))
		len = len_s - start;
	if (start > len_s)
		return (ft_strdup(""));
	res = (char *)ft_calloc((len + 1), sizeof(*s));
	if (!res)
		return (NULL);
	ft_strlcpy(res, &((char *)s)[start], (len + 1));
	return (res);
}

/*int	main(void)
{
	char	str[] = "52 Barcelona";
	int		start;
	int		len;
	char	*res;
	
	int		x;
	x = sizeof(res);

	start = 3;
	len = 5;

	res = ft_substr(NULL, start, len);
	res = ft_substr(str, start, len);
	printf("\nres: &s\n len_res: &i\n", res, x);
}*/
