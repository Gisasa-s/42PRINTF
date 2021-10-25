/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puntero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gisasa-s <gisasa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:40:01 by gisasa-s          #+#    #+#             */
/*   Updated: 2021/10/25 18:24:11 by gisasa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puntero(long n)
{
	int	bytes;

	bytes = 0;
	bytes += write(1, "0x", 2);
	bytes += ft_putnbr_ptr(n);
	return (bytes);
}
