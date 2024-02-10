/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:45:31 by skomarov          #+#    #+#             */
/*   Updated: 2023/11/27 19:41:38 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	t_list	*last_node;

	new_lst = NULL;
	last_node = ft_lstlast(new_lst);
	while (lst != NULL)
	{
		new_node = (t_list *)malloc(sizeof(t_list));
		if (new_node == NULL)
		{
			del(lst -> content);
			return (NULL);
		}
		new_node -> content = f(lst->content);
		new_node -> next = NULL;
		if (new_lst == NULL)
			new_lst = new_node;
		else
			last_node -> next = new_node;
		last_node = new_node;
		lst = lst -> next;
	}
	return (new_lst);
}
