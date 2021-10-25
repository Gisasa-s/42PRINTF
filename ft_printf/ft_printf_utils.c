/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gisasa-s <gisasa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 19:27:06 by gisasa-s          #+#    #+#             */
/*   Updated: 2021/10/25 18:26:53 by gisasa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	size_t	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			write(1, &s[i], 1);
			i++;
		}
	}
	else
	{
		i = write(1, "(null)", 6);
	}
	return (i);
}

int	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}

int	ft_putnbr_fd(long n, int fd)
{
	char	c;
	int		bytes;

	bytes = 0;
	if (n == -2147483648)
	{
		bytes += write(fd, "-2147483648", 11);
	}
	if (n < 0 && n != -2147483648)
	{
		bytes += ft_putchar_fd('-', fd);
		n = n * (-1);
	}
	if (n > 9)
	{
		c = (n % 10) + 48;
		bytes += ft_putnbr_fd((n / 10), fd);
		bytes += ft_putchar_fd(c, fd);
	}
	if (n >= 0 && n < 10)
	{
		c = n + 48;
		bytes += ft_putchar_fd(c, fd);
	}
	return (bytes);
}
