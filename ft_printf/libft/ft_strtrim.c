/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:57:07 by daoliver          #+#    #+#             */
/*   Updated: 2023/07/14 18:36:08 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	len = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[len]) && len != 0)
		len --;
	return (ft_substr((char *)s1, 0, len + 1));
}

/*int	main(void)
{
	char	str[] = "3141926352Barcelona42";
	char	trim[] = "123467890";
	char	*res;

	res = ft_strtrim(str, trim);
	printf("Original: %s\nTrim: %s\nres: %s\n", str, trim, res);
}*/
