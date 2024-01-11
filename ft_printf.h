/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:43:54 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/11 12:17:01 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_putarea_count(const char *start, const char *end);
int		ft_putstr_count(const char *str);
#endif