/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:17:14 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/09 16:36:39 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Parameters
// lst: The address of a pointer to the first link of a list.
// new: The address of a pointer to the node to be added to the list.

// Description
// Adds the node ’new’ at the beginning of the list.

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
