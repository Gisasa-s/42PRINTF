/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libftprintf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gisasa-s <gisasa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 11:43:34 by gisasa-s          #+#    #+#             */
/*   Updated: 2021/10/22 12:16:25 by gisasa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)  
{
    int bytes;
    int i;
    bytes = 0;
    va_list list;
    i = 0;
    va_start (list, format); //niciallizo la lista de argummentos 
     while (format[i]) //hasta que formart i sea \0
     {
         if (format[i] == '%') //si emcuentra un %
        {
            i++; // me muevo mas posiciones en i 
            bytes += comprobantes(list ,format[i]); //comprobantes me mira el caracter que hay dentras del % como s,d,i,p
        } 
        else // sino es un % 
            bytes+= ft_putchar_fd(format[i], 1); //imprime la stting en laa posiciopn i actual 
        i++; // recorre la cadena cn i++ 
     } 
    return (bytes); //retorno bytes paraq ue devuellva el n de bytes 
}
