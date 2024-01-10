/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:48:25 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/05 15:56:36 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	DESCRIPTION
//	Allocates (with malloc(3)) and returns a new
//	string, which is the result of the concatenation
//	of ’s1’ and ’s2’.
//	
//	RETURN VALUE
//	The new string.
//	NULL if the allocation fails.

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	s1len;
	size_t	s2len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	newstr = malloc(sizeof(char) * (s1len + s2len + 1));
	if (newstr == NULL)
		return (NULL);
	ft_memcpy(newstr, s1, s1len);
	ft_memcpy(newstr + s1len, s2, s2len + 1);
	return (newstr);
}
