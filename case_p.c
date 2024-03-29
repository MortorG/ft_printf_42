/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:23:36 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/18 19:08:18 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	case_p(char **str, va_list args)
{
	void			*p;
	unsigned long	n;

	p = va_arg(args, void *);
	n = (unsigned long)p;
	*str += 2;
	print_chars("0x", 2);
	return (print_base_u(n, "0123456789abcdef") + 2);
}
