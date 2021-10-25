#include "ft_printf.h"


int main()
{
    int i;
    int k;
    i = 0;
    k = 0;
    //printf("Original printf return value = %i\n\n", printf("%s\n","hola"));
    //printf("MY printf return value = %i\n", ft_printf("%s\n", "hola"));
     i = printf("%x\n", 3453254);
     k = ft_printf("%x\n", 3453254);
     printf("%d %d" , i ,k  );
}
