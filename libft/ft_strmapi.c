/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:39:16 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/09 15:14:13 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description 
// Applies the function ’f’ to each character of the
// string ’s’, and passing its index as first argument
// to create a new string (with malloc(3)) resulting
// from successive applications of ’f’.

// Return value
// The string created from the successive applications of ’f’.
// Returns NULL if the allocation fails

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (str);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}
