/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:10:16 by puttasa           #+#    #+#             */
/*   Updated: 2022/10/27 17:12:24 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int	res;
	va_list	arg_ptr;

	res = 0;
	va_start(arg_ptr, s);
	while (*s)
	{
		if (*s == '%')
		{
			res += ft_check(arg_ptr, *(s + 1));
			s++;
		}
		else
			res += ft_putchar(*s);
		s++;
	}
	va_end(arg_ptr);
	return (res);
}
