/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_funcs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:34:28 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/18 17:38:05 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_hex(unsigned long n)
{
	static char	hex[] = "0123456789abcdef";
	int			i;

	i = 0;
	if (i == 0)
	{
		print_chars(&hex[0], 1);
		i++;
	}
	while (n)
	{
		print_chars(&hex[n % 16], 1);
		n = n / 16;
		i++;
	}
	return (i);
}