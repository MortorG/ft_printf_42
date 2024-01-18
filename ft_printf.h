/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:43:54 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/18 13:52:33 by hufuster         ###   ########.fr       */
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
int case_error(char **str, va_list args);
#endif