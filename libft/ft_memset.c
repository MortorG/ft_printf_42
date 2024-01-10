/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:35:32 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/07 13:08:07 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int val, size_t len)
{
	unsigned char	*s;

	s = (unsigned char *)dst;
	while (len > 0)
	{
		*s = (unsigned char)val;
		s++;
		len--;
	}
	return (dst);
}
