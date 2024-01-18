/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:26:20 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/11 18:36:28 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// len-- >= needle_l checks if needle can fit in remaining characters to search

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_l;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_l = ft_strlen(needle);
	while (*haystack != '\0' && len-- >= needle_l)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, needle_l) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
