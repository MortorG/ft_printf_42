/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:26:20 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/05 11:15:19 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_need;

	if (*needle == '\0')
		return ((char *)haystack);
	len_need = ft_strlen(needle);
	while (*haystack != '\0' && len-- >= len_need)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, len_need) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
