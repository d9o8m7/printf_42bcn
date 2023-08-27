/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:27:40 by daoliver          #+#    #+#             */
/*   Updated: 2023/06/30 18:01:27 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*ptr;

	i = 0;
	ptr = malloc(count * size);
	if (!ptr || ptr == NULL)
		return (NULL);
	while (i < count * size)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

/*int	main(void)
{
	size_t	num;
	size_t	size;
	int		*a;

	num = 10;
	size = 5;

	a = ft_calloc(num, size);

	int	i;
	i = 0;
	while (a[i] == 0)
	{
		printf("i%d:%d, ", i, a[i]);
		i++;
	}
	printf("\nPointer Address: a:%p:\n", a);
}*/
