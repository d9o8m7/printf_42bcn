/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:22:23 by daoliver          #+#    #+#             */
/*   Updated: 2023/07/13 12:26:42 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}

/*int	main(void)
{
	t_list	*toma;

	toma = ft_lstnew("52 Barcelona");
	printf("First element of the list: %s\n", toma -> content);
	ft_lstadd_front(&toma, toma);
}*/
