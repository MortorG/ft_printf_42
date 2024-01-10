/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:40:12 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/09 16:45:15 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Parameters 
// lst: The address of a pointer to the first link of a list.
// new: The address of a pointer to the node to be added to the list.

// Description 
// Adds the node ’new’ at the end of the list

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			temp = ft_lstlast(*lst);
			temp->next = new;
		}
	}
}
