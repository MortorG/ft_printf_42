/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:45:58 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/09 16:48:51 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Parameters 
// lst: The node to free.
// del: The address of the function used to delete the content

// Description
// Takes as a parameter a node and frees the memory of the node’s content using
// the function ’del’ given as a parameter and free the node. The memory of 
// ’next’ must not be freed.

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
