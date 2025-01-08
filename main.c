#include "ft_printf.h"
#include <stdio.h>

int main (void)
{
    int d = 150;
    int i = 42;
    char c = 'c';
    unsigned int u = -150;
    char s[124] = "Forty-Two";
    int *ptr = &i;
    int x = 124;
    int X = 124;
    //unsigned int num = 20;
    ft_printf("ceci est un test \n d = %d \n i = %i \n u = %u \n c = %c \n %% = %% \n s = %s\n p = %p\n x = %x \n, X = %X\n",d, i, u, c, s,ptr,x,X);
    printf("ceci est un test \n d = %d \n i = %i \n u = %u \n c = %c \n %% = %% \n s = %s\n p = %p\n x = %x \n, X = %X\n",d, i, u, c, s,ptr,x,X);
    return 0;
}
