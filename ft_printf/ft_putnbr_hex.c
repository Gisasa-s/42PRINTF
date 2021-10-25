/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gisasa-s <gisasa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:40:13 by gisasa-s          #+#    #+#             */
/*   Updated: 2021/10/22 10:52:37 by gisasa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int ft_putnbr_hex(long n) // pongo un  long por que con size t y unsigend int no cabia la direccion de memoria del puntero 
{
	char *str;
	int bytes;
	bytes = 0;
	
 str = "0123456789abcdef"; // Le digo que str es esta cadena 
	
   if  (n > 15) //si nots es menor que 15 (condicion)
	{
		bytes += ft_putnbr_hex((n/ 16));
		 bytes += ft_putchar_fd(str[n % 16 ],1);
	}
	else
	{
	
		 bytes+= ft_putchar_fd(str[n],1); // Llamo a la funcion ft_putchar yy con ella imprimo str en la posiocn de nots  
	}
	return (bytes);
}

