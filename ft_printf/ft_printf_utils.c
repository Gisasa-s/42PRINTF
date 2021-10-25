/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gisasa-s <gisasa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 19:27:06 by gisasa-s          #+#    #+#             */
/*   Updated: 2021/10/18 11:40:16 by gisasa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char *s)
{
	size_t i;
	
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
		i = write(1, "(null)" ,6);
		}
	return (i);
}