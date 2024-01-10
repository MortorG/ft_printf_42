/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:35:42 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/05 11:15:16 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;

	dst = (char *)malloc(sizeof(*dst) * (ft_strlen(s1) + 1));
	if (dst == NULL)
		return (NULL);
	ft_strcpy(dst, s1);
	return (dst);
}
