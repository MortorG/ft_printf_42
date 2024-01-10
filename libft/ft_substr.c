/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 13:31:53 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/10 11:10:16 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	DESCRIPTION
//	Allocates (with malloc(3)) and returns a substring from the string ’s’.
//	The substring begins at index ’start’ and is of maximum size ’len’.
//
// 	RETURN VALUE
//		The substring.
//		NULL if the allocation fails

//	EXPLANATION
//	First it checks if the start is outside the string and returns an empty
//	string if it is
//	
//	After it checks if the string is smaller than the len after start, so it can
//	allocate less memory in those cases
//
//	Then it allocates the necessary memory
//
//	Finally it copies the substring
//
#include "libft.h"

static char	*ft_empty_string(void)
{
	char	*str;

	str = (char *)malloc(sizeof(char));
	if (!str)
		return (str);
	*str = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_empty_string());
	if (s_len - start < len)
		len = s_len - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
