#include "ft_printf.h"
#include <stdio.h>

int main (void)
{
    int d = 150;
    int i = 42;
    char c = 'c';
    unsigned int u = -150; 
    //unsigned int num = 20;
    ft_printf("ceci est un test \n d = %d \n i = %i \n u = %u \n c = %c \n %% = %% bravo",d, i, u, c);
    return 0;
}
