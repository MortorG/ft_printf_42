/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:20:10 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/18 17:04:01 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	case_s(char **str, va_list args)
{
	char	*s;
	int		len;

	s = va_arg(args, char *);
	len = ft_strlen(s);
	*str += 2;
	return (print_chars(s, len));
}