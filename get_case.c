/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_case.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:31:55 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/18 14:32:11 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//	converts and prints % identifier, moves pointer to after and argument type, 
//	and returns amount of characters printed;
int	(*get_case(char *str))(char **str, va_list args)
{
	if (str[1] == 'c')
		return (case_c);
	else
		return (case_error);
}