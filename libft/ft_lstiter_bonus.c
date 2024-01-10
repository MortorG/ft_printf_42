/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:54:50 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/09 17:04:46 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Parameters 
// lst: The address of a pointer to a node.
// f: The address of the function used to iterate on the list.

// Description 
// Iterates the list ’lst’ and applies the function ’f’ 
// on the content of each node.

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = lst;
	if (lst == NULL)
		return ;
	while (temp != NULL)
	{
		(*f)(temp->content);
		temp = temp->next;
	}
}
