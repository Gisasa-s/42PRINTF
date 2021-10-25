/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comprobantes.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gisasa-s <gisasa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 11:17:35 by gisasa-s          #+#    #+#             */
/*   Updated: 2021/10/25 16:54:01 by gisasa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int comprobantes (va_list list , char c) // ongo la i para indicarle que con mas codigo, que devuelva lo leido auun no 
{ 
    int bytes;
    bytes = 0;
    char p ='%';
    
    if (c == 's')
                bytes += ft_putstr(va_arg (list , char*));        
                           
    else if (c == 'i' || c == 'd') 
               bytes += ft_putnbr_fd(va_arg(list, int),1);
    else if (c == 'c')
              bytes += ft_putchar_fd(va_arg(list , int),1);
    else if (c == '%')
                bytes = write(1, &p, 1);
    else if (c == 'x')
             bytes += ft_putnbr_hex(va_arg (list, unsigned int)); //lo uso el 1  para imprimirlo en pantalla 
    else if (c == 'X')  
             bytes+=  ft_putnbr_hexa(va_arg(list ,unsigned int)); // lo uso el 0  make      
    else if (c == 'u')
           bytes+= ft_putnbr_fd(va_arg(list , unsigned int),1);     
    else if (c == 'p')
                 bytes+= ft_puntero(va_arg(list, long));
    return(bytes);
}
