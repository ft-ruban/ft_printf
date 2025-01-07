#include "ft_printf.h"
#include <stdio.h>

int main (void)
{
    int test = 150;
    char atoitest[150] = "13245";
    ft_printf("ceci est un test j'adore le caca mhhh 42 %d oui", test);
    test = atoi(atoitest);
    printf("\n%d", test);
    return 0;
}
