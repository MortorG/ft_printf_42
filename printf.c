/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:44:45 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/18 19:50:17 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	char	*cur;
	int		count;

	count = 0;
	va_start(args, str);
	while (str)
	{
		cur = ft_strchr(str, '%');
		if (cur == NULL)
		{
			count += print_chars((char *)str, ft_strlen(str));
			str = cur;
		}
		else
		{
			count += print_chars((char *)str, cur - str);
			str = cur;
			count += ex_case(get_case((char *)str), (char **)&str, args);
		}
	}
	va_end(args);
	return (count);
}
