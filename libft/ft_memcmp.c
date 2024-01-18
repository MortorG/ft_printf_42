/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:28:53 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/11 17:39:24 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *src1, const void *src2, size_t n)
{
	unsigned char	*byte1;
	unsigned char	*byte2;

	if (src1 == src2 || n == 0)
		return (0);
	byte1 = (unsigned char *)src1;
	byte2 = (unsigned char *)src2;
	while (n--)
	{
		if (*byte1 != *byte2)
			return (*byte1 - *byte2);
		if (n)
		{
			byte1++;
			byte2++;
		}
	}
	return (0);
}
