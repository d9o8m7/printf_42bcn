/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:40:14 by daoliver          #+#    #+#             */
/*   Updated: 2023/06/30 19:00:40 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	size_t	len;
	int		i;

	len = ft_strlen(s1) + 1;
	if (!s1)
		return (NULL);
	res = (char *)ft_calloc(len, sizeof(*s1));
	if (!res)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*int	main(void)
{
	char	str[] = "52BCN";
	char	*res = ft_strdup(str);

	printf("str original: %s, pointer: %p, %u\n", str, str);
	printf("res copied: %s, pointer: %p,%u\n", res, res);
}*/
