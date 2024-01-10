/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 13:06:21 by hugo              #+#    #+#             */
/*   Updated: 2024/01/07 14:35:02 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Description
// Allocates(with malloc(3)) and
// returns an array
// of strings obtained by splitting ’s’ using the
// character ’c’ as a delimiter.The array must end
// with a NULL pointer.

// Return
// value The array of new strings resulting from the split.
// NULL if the allocation fails.

#include "libft.h"

// 	Check for empty string first
// 	While string has not ended
//		Check for repeating separator
//		Check if string has ended now
//		Check for non separator characters

static size_t	ft_countwords(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static void	*ft_free_memory(char **arr, int i)
{
	while (--i >= 0)
		free(arr[i]);
	free(arr);
	return (NULL);
}

//	Allocate memory for word array
//	When found word in string, calculate lenght checking if its last word or not
//	Allocate new word using substr, and if allocation fails, free all previous
//	memory allocated and return NULL

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	size_t	len;

	arr = (char **)ft_calloc((ft_countwords(s, c) + 1), sizeof(char *));
	if (!arr)
		return (arr);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (ft_strchr(s, c) == NULL)
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			arr[i++] = ft_substr(s, 0, len);
			if (arr[i - 1] == NULL)
				return (ft_free_memory(arr, i - 1));
			s += len;
		}
	}
	return (arr);
}
