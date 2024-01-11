/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:44:45 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/11 14:53:14 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	char	*next_id;
	int		cur;
	int		char_count;

	char_count = 0;
	cur = 0;
	va_start(args, str);
	while (str)
	{
		
	}
}
