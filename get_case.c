/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_case.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:31:55 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/18 17:38:56 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//	converts and prints % identifier, moves pointer to after and argument type, 
//	and returns amount of characters printed;
int	(*get_case(char *str))(char **str, va_list args)
{
	if (str[1] == 'c')
		return (case_c);
	else if (str[1] == 's')
		return (case_s);
	else if (str[1] == 'p')
		return (case_p);
	else if (str[1] == 'd')
		return (case_d);
	else if (str[1] == 'u')
		return (case_u);
	else if (str[1] == 'x')
		return (case_x);
	else if (str[1] == 'X')
		return (case_xx);
	else if (str[1] == '%')
		return (case_percent);
	else
		return (case_error);
}