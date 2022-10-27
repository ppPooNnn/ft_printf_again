/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:49:50 by puttasa           #+#    #+#             */
/*   Updated: 2022/10/27 18:17:15 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(va_list arg_ptr, const char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(arg_ptr, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(arg_ptr, char *)));
	else if (c == 'p')
	{
		write(1, "0x", 2);
		return (ft_puthex(va_arg(arg_ptr, unsigned long), c) + 2);
	}
	else if (c == 'd')
		return (ft_putnbr(va_arg(arg_ptr, int)));
	else if (c == 'i')
		return (ft_putnbr(va_arg(arg_ptr, unsigned int)));
	else if (c == 'u')
		return (ft_putnbr(va_arg(arg_ptr, unsigned int)));
	else if (c == 'x')
		return (ft_puthex(va_arg(arg_ptr, unsigned long), c));
	else if (c == 'X')
		return (ft_puthex(va_arg(arg_ptr, unsigned long), c));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}
