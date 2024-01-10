/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:47:53 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/10 11:03:03 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description Allocates (with malloc(3)) and returns a string
// representing the integer received as an argument.
// Negative numbers must be handled.

// Return value The string representing the integer.
// NULL if the allocation fails.

static int	ft_find_num_len(int n)
{
	size_t	i;

	if (n < 0)
		n = -n;
	i = 1;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*ft_alloc_num(int n, int len)
{
	char	*str;

	if (n < 0)
		str = (char *)ft_calloc(len + 2, sizeof(char));
	else
		str = (char *)ft_calloc(len + 1, sizeof(char));
	return (str);
}

static char	*ft_handle_min_int(void)
{
	char	*str;

	str = malloc(12 * sizeof(char));
	if (!str)
		return (str);
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		end;

	if (n == -2147483648)
		return (ft_handle_min_int());
	len = ft_find_num_len(n);
	str = ft_alloc_num(n, len);
	if (!str)
		return (str);
	end = 0;
	len--;
	if (n < 0)
	{
		str[end++] = '-';
		n = -n;
		len++;
	}
	while (len >= end)
	{
		str[len] = '0' + (n % 10);
		n = n / 10;
		len--;
	}
	return (str);
}
