/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gisasa-s <gisasa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:29:47 by gisasa-s          #+#    #+#             */
/*   Updated: 2021/10/25 18:29:56 by gisasa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_ptr(size_t n)
{
	char	*str;
	int		bytes;

	bytes = 0;
	str = "0123456789abcdef";
	if (n > 15)
	{
		bytes += ft_putnbr_ptr((n / 16));
		bytes += ft_putchar_fd(str[n % 16 ], 1);
	}
	else
	{
		 bytes += ft_putchar_fd(str[n], 1);
	}
	return (bytes);
}
