/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:01:52 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/09 13:13:02 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	DESCRIPTION
//	Allocates (with malloc(3)) and returns a copy of
//	’s1’ with the characters specified in ’set’ removed
//	from the beginning and the end of the string.
//	
//	RETURN VALUE
//	The trimmed string.
//	NULL if the allocation fails.

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*start;
	char	*end;

	if (!s1 || !set)
		return (NULL);
	start = (char *)s1;
	end = start + ft_strlen(s1);
	while (*start && ft_strchr(set, *start))
		++start;
	while (start < end && ft_strchr(set, *(end - 1)))
		--end;
	return (ft_substr(start, 0, end - start));
}
