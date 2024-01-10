/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:20:19 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/10 11:37:29 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description 
// Outputs the character ’c’ to the given file descriptor

// Parameters 
// c: The character to output.
// fd: The file descriptor on which to write.

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
