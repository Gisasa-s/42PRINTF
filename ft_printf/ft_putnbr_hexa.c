#include "ft_printf.h"

int ft_putnbr_hexa(long n) // pongo un  long por que con size t y unsigend int no cabia la direccion de memoria del puntero 

{
	char *str;
	int bytes;  
	bytes = 0;
    str = "0123456789ABCDEF"; // Le digo que str es esta cadena 
    if (n > 15) //si nots es menor que 15 (condicion)
	{
		bytes+= ft_putnbr_hexa((n/ 16)); // va diviendo n etre 16 hasta que da uno qu es menor a 16
		bytes += ft_putchar_fd(str[n  % 16],1); // y cuando sea me nkr a 16 coje el indice al que correponde 
	}
	else
	{
		bytes+=  ft_putchar_fd(str[n],1); // Llamo a la funcion ft_putchar yy con ella imprimo str en la posiocn de nots  
	}
	return (bytes);
}
// es lo mismos que el puTnbr , pero en exadecimal 
