/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:23:26 by daoliver          #+#    #+#             */
/*   Updated: 2023/06/26 15:14:50 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

/*int	main(void)
{
	t_list	*list;
	t_list	*one;
	int		res;

	list = ft_lstnew("52 Barcelona");
	printf("%s\n", list -> content);

	one -> content = "1337";
	ft_lstadd_front(&list, one);

	printf("Number of elements in the list %d\n", ft_lstsize(list));
}*/
