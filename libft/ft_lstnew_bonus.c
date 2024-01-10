/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:07:58 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/09 16:17:44 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description 
// Allocates (with malloc(3)) and returns a new node.
// The member variable ’content’ is initialized with
// the value of the parameter ’content’. The variable
// ’next’ is initialized to NULL.

// Return value
// The new node

// Parameters content: 
// The content to create the node with

void	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
