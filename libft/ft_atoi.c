/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:59:41 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/05 11:14:55 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	const int	offset = '0';
	int			sign;
	int			result;

	result = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign = -1;
	else
		sign = 1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str))
	{
		result = result * 10 + *str - offset;
		str++;
	}
	result *= sign;
	return (result);
}
