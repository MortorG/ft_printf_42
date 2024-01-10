/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:05:21 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/09 18:25:54 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Parameters 
// lst: The address of a pointer to a node.
// f: The address of the function used to iterate on the list.
// del: The address of the function used to delete the content of a node

// Description 
// Iterates the list ’lst’ and applies the function ’f’ on the content of each
// node. 
// Creates new list resulting of the successive applications of the function ’f’
// The ’del’ function is used to delete the content of a node if needed.

// Return value 
// The new list.
// NULL if the allocation fails

static void	ft_clear_listonly(t_list *new_list, t_list *temp)
{
	while (new_list != NULL)
	{
		temp = new_list->next;
		if (new_list != NULL)
			free(new_list);
		new_list = temp;
	}
}

static t_list	*ft_lstdup(t_list *lst)
{
	t_list	*new_list;
	t_list	*temp;

	if (!lst)
		return (NULL);
	new_list = ft_lstnew(lst->content);
	if (!new_list)
		return (NULL);
	temp = NULL;
	while (lst->next != NULL)
	{
		lst = lst->next;
		temp = ft_lstnew(lst->content);
		if (!temp)
		{
			ft_clear_listonly(new_list, temp);
			return (NULL);
		}
		ft_lstadd_back(&new_list, temp);
	}
	return (new_list);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*start;

	new_list = ft_lstdup(lst);
	if (!new_list)
		return (NULL);
	start = new_list;
	while (new_list != NULL)
	{
		if (new_list == NULL)
			del(new_list->content);
		new_list->content = f(new_list->content);
		new_list = new_list->next;
	}
	return (start);
}
