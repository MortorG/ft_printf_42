/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:49:39 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/09 16:54:18 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Parameters
// lst: The address of a pointer to a node.
// del: The address of the function used to delete the content of the node.

// Description Deletes and frees the given node and every successor of that node
// using the function ’del’ and free(3).
// Finally, the pointer to the list must be set to NULL.

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (lst)
	{
		while (*lst != NULL)
		{
			temp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = temp;
		}
	}
}
