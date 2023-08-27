/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:29:33 by daoliver          #+#    #+#             */
/*   Updated: 2023/07/14 18:33:06 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f (lst -> content);
		lst = lst -> next;
	}
}

/*void	print(void *c)
{
	printf("%s\n", (char *)c);
}

int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;
	a = ft_lstnew("52 Barcelona");
	b = ft_lstnew("1337");
	c = ft_lstnew("HIVE");
	ft_lstadd_back(&a, b);
	ft_lstadd_back(&a, c);
	ft_lstiter(a, print);
	return (0);
}*/
