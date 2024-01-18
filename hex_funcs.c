/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_funcs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:34:28 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/18 19:12:15 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_numlen(long n, int base)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n /= base;
		count++;
	}
	return (count);
}

int	print_base(long n, char *base)
{
	int		base_num;
	int		i;	
	int		len;
	char	*str;

	base_num = ft_strlen(base);
	len = ft_numlen(n, base_num);
	str = malloc(sizeof(char) * (len + 1));
	i = len;
	if (!str)
		return (0);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	while (n)
	{
		if (n > 0)
			str[--len] = base[n % base_num];
		else
			str[--len] = base[n % base_num * -1];
		n /= base_num;
	}
	print_chars(str,i);
	free(str);
	return (i);
}

static int	ft_numlen_ns(long n, int base)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	while (n != 0)
	{
		n /= base;
		count++;
	}
	return (count);
}

int	print_base_ns(long n, char *base)
{
	int		base_num;
	int		i;	
	int		len;
	char	*str;

	base_num = ft_strlen(base);
	len = ft_numlen_ns(n, base_num);
	str = malloc(sizeof(char) * (len + 1));
	i = len;
	if (!str)
		return (0);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		if (n > 0)
			str[--len] = base[n % base_num];
		else
			str[--len] = base[n % base_num * -1];
		n /= base_num;
	}
	print_chars(str,i);
	free(str);
	return (i);
}

static int	ft_numlen_u(unsigned long n, int base)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	while (n != 0)
	{
		n /= base;
		count++;
	}
	return (count);
}

int	print_base_u(unsigned long n, char *base)
{
	int		base_num;
	int		i;	
	int		len;
	char	*str;

	base_num = ft_strlen(base);
	len = ft_numlen_u(n, base_num);
	str = malloc(sizeof(char) * (len + 1));
	i = len;
	if (!str)
		return (0);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		str[--len] = base[n % base_num];
		n /= base_num;
	}
	print_chars(str,i);
	free(str);
	return (i);
}