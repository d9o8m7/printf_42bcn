/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:28:51 by daoliver          #+#    #+#             */
/*   Updated: 2023/06/13 12:03:17 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	printc(unsigned int i, char *c)
{
	c[0] = c[0] + i;
	//printf("%c", c[0]);
}

int	main(void)
{
	char	str[13] = "52 Barcelona";
	char	p[0];

	p[0] = 'A';
	
	printc(1, p);
	printf("Before ft_striteri: %c\n", p[0]);
	ft_striteri(str, printc);
	printf("After ft_striteri: %c\n", str);
}*/
