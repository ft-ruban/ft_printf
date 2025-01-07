#include "ft_printf.h"
#include <stdio.h>

int main (void)
{
    int d = 150;
    int i = 42;
    unsigned int u = -150; 
    //unsigned int num = 20;
    ft_printf("ceci est un test \n d = %d \n i = %i \n u = %u",d, i, u);
    return 0;
}
