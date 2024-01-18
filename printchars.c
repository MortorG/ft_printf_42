/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printchars.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:31:12 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/18 14:31:14 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_chars(char *str, size_t len)
{
	int	ret;

	ret = len;
	while (len)
	{
		ft_putchar_fd(*str, 1);
		str++;
		len--;
	}
	return (ret);
}