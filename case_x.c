/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:33:01 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/18 19:35:45 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	case_x(char **str, va_list args)
{
	unsigned long	n;

	*str += 2;
	n = va_arg(args, unsigned long);
	if (n == 9223372036854775807L +1UL)
		return (print_chars("0", 1));
	else if (n == 9223372036854775807L)
		return (print_chars("ffffffff", 8));
	else if (n == (9223372036854775807L *2UL+1UL))
		return (print_chars("ffffffff", 8));
	return (print_base_u(n, "0123456789abcdef"));
}