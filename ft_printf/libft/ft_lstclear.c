/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:28:12 by daoliver          #+#    #+#             */
/*   Updated: 2023/06/26 16:18:14 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l_aux;

	if (lst)
	{
		while (*lst)
		{
			l_aux = (*lst)->next;
			del ((*lst)->content);
			free (*lst);
			*lst = l_aux;
		}
	}
}
