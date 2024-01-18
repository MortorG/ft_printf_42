/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:44:45 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/18 13:44:55 by hufuster         ###   ########.fr       */
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
	return (count);
}

//	prints len characters and returns amount;
int	print_chars(char *str, size_t len)
{
	int	ret;

	ret = len;
	while (len)
	{
		ft_putchar_fd(*str, 1);
		str++;
		len--;
	}
	return (ret);
}

//	converts and prints % identifier, moves pointer to after and argument type, 
//	and returns amount of characters printed;
int	(*get_case(char *str))(char **str, va_list args)
{
	if (str[1] == 'c')
		return (case_c);
	else
		return (case_error);
}

int	ex_case(int (*f)(char **str, va_list args), char **str, va_list args)
{
	return ((*f)(str, args));
}

int	case_c(char **str, va_list args)
{
	ft_putchar_fd(va_arg(args, int), 1);
	*str += 2;
	return (1);
}
int case_error(char **str, va_list args)
{
	*str += 1;
	return(0);
}
