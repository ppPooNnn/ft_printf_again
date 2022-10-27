/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_lowhex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:51:46 by puttasa           #+#    #+#             */
/*   Updated: 2022/10/27 18:16:28 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, char c)
{
	int	res;

	res = 0;
	if (n >= 16)
		res += ft_puthex(n / 16, c);
	if (n % 16 > 9)
	{
		if (c == 'x' || c == 'p')
			res += ft_putchar((n % 16) - 10 + 'a');
		else
			res += ft_putchar((n % 16) - 10 + 'A');
	}
	else
		res += ft_putchar(n % 16 + '0');
	return (res);
}
