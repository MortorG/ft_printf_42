/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:45:43 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/18 17:36:12 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	case_d(char **str, va_list args)
{
	char	*s;

	s = ft_itoa(va_arg(args, int));
	*str += 2;
	return (print_chars(s, ft_strlen(s)));
}