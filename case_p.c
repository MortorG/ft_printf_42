/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:23:36 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/18 17:41:23 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	case_p(char **str, va_list args)
{
	unsigned long	p;

	*str += 2;
	p = va_arg(args, unsigned long);
	print_chars("0x", 2);
	return (print_hex(p) + 2);
}
