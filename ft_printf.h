/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:43:54 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/18 17:38:51 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	print_chars(char *str, size_t len);
int	(*get_case(char *str))(char **str, va_list args);
int	ex_case(int (*f)(char **str, va_list args), char **str, va_list args);
int	case_c(char **str, va_list args);
int	case_s(char **str, va_list args);
int	case_p(char **str, va_list args);
int	case_d(char **str, va_list args);
int	case_u(char **str, va_list args);
int	case_x(char **str, va_list args);
int	case_xx(char **str, va_list args);
int	case_percent(char **str, va_list args);
int	case_error(char **str, va_list args);
int	print_hex(unsigned long n);
#endif