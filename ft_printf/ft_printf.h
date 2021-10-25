/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gisasa-s <gisasa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 12:51:09 by gisasa-s          #+#    #+#             */
/*   Updated: 2021/10/25 17:11:40 by gisasa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <ctype.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

int		ft_putstr(char *s);
int		ft_putnbr_fd(long n, int fd);
int		ft_printf(const char *formato, ...);
int		ft_putchar_fd(char c, int fd);
int		comprobantes(va_list list, char c);
int		ft_putnbr_hex(long n);
char	*ft_unsigned(int n);
int		ft_puntero(long int n);
int		ft_numbers(unsigned int numbers);
int		ft_putnbr_hexa(long n);
int		ft_putnbr_ptr(size_t n);

#endif