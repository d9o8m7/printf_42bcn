/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:32:24 by daoliver          #+#    #+#             */
/*   Updated: 2023/07/14 18:39:08 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l_aux;
	t_list	*elem;
	t_list	*list;

	list = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		l_aux = f (lst -> content);
		elem = ft_lstnew(l_aux);
		if (!elem)
		{
			del (l_aux);
			ft_lstclear(&list, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&list, elem);
		lst = lst -> next;
	}
	return (list);
}
