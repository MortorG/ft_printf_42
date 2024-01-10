/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:42:00 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/05 11:15:16 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	cur;

	cur = 0;
	while (src[cur] != '\0')
	{
		dst[cur] = src[cur];
		cur++;
	}
	dst[cur] = '\0';
	return (dst);
}
