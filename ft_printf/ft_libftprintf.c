/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libftprintf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gisasa-s <gisasa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 11:43:34 by gisasa-s          #+#    #+#             */
/*   Updated: 2021/10/25 18:10:14 by gisasa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int			bytes;
	int			i;
	va_list		list;

	bytes = 0;
	i = 0;
	va_start (list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			  i++;
			  bytes += comprobantes(list, format[i]);
		}
		else
			bytes += ft_putchar_fd(format[i], 1);
		i++;
	}
	return (bytes);
}
