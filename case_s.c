/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:20:10 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/18 18:49:04 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	case_s(char **str, va_list args)
{
	char	*s;
	int		len;

	s = va_arg(args, char *);
	*str += 2;
	if (s == NULL)
	{
		return(print_chars("(null)", 6));
	}
	len = ft_strlen(s);
	return (print_chars(s, len));
}