/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:21:41 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/09 16:34:27 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description 
// Counts the number of nodes in a list.

// Parameters 
// lst: The beginning of the list.

int	ft_lstsize(t_list *lst)
{
	size_t	i;
	t_list	*l;

	i = 0;
	l = lst;
	if (lst)
	{
		i = 1;
		while (l->next != NULL)
		{
			i++;
			l = l->next;
		}
	}
	return (i);
}
