/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:33:01 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/18 18:46:02 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_numlen(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*ft_itoa_unsigned(unsigned int n)
{
	int		len;
	char	*str;

	len = ft_numlen(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = 0;
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	while (n)
	{
		if (n > 0)
			str[--len] = '0' + (n % 10);
		n /= 10;
	}
	return (str);
}

int	case_u(char **str, va_list args)
{
	char	*s;
	int		i;

	s = ft_itoa_unsigned(va_arg(args, unsigned int));
	*str += 2;
	i = print_chars(s, ft_strlen(s));
	free(s);
	return (i);
}

