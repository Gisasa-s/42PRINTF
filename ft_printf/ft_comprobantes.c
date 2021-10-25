/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comprobantes.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gisasa-s <gisasa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:41:41 by gisasa-s          #+#    #+#             */
/*   Updated: 2021/10/25 18:00:56 by gisasa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	comprobantes(va_list list, char c)
{
	int		bytes;
	char	p;

	p = '%';
	bytes = 0;
	if (c == 's')
		bytes += ft_putstr(va_arg (list, char *));
	else if (c == 'i' || c == 'd')
		bytes += ft_putnbr_fd(va_arg(list, int), 1);
	else if (c == 'c')
		bytes += ft_putchar_fd(va_arg(list, int), 1);
	else if (c == '%')
		bytes = write(1, &p, 1);
	else if (c == 'x')
		bytes += ft_putnbr_hex(va_arg (list, unsigned int));
	else if (c == 'X')
		bytes += ft_putnbr_hexa(va_arg(list, unsigned int));
	else if (c == 'u')
		bytes += ft_putnbr_fd(va_arg(list, unsigned int), 1);
	else if (c == 'p')
		bytes += ft_puntero(va_arg(list, long));
	return (bytes);
}
