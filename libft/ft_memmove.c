/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:08:33 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/11 17:41:06 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*byte1;
	unsigned char	*byte2;

	byte1 = (unsigned char *)dst;
	byte2 = (unsigned char *)src;
	if (dst == src)
		return (dst);
	if (byte2 < byte1)
	{
		while (len--)
			*(byte1 + len) = *(byte2 + len);
		return (dst);
	}
	else
	{
		while (len--)
			*byte1++ = *byte2++;
		return (dst);
	}
}
