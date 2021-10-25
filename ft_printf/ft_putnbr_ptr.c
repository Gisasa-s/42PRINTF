#include "ft_printf.h"

int ft_putnbr_ptr(size_t n) //con l oque caben mas numeros en la cadena 
{
	char *str;
	int bytes;
	bytes = 0;
	
 str = "0123456789abcdef"; // Le digo que str es esta cadena 
	
   if  (n > 15) //si nots es mayor  que 15 (condicion)
	{
		bytes += ft_putnbr_ptr((n/ 16)); //la diferencia de esta funcion es que esta tiene un size_t lo que caben mas numeros 
		 bytes += ft_putchar_fd(str[n % 16 ],1);
	}
	else
	{
	
		 bytes+= ft_putchar_fd(str[n],1); // Llamo a la funcion ft_putchar yy con ella imprimo str en la posiocn de nots  
	}
	return (bytes);
}
