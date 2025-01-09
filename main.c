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
    char eating[7] = "Eating";
    char hamburger[10] = "Hamburger";
    char potato [7] = "Potato";
    char yeah [7] = "Yeah";
    //unsigned int num = 20;
    ft_printf("ceci est un test \n d = %d \n i = %i \n u = %u \n c = %c \n %% = %% \n s = %s\n p = %p\n x = %x \n X = %X\n",d, i, u, c, s,ptr,x,X);
    printf("ceci est un test \n d = %d \n i = %i \n u = %u \n c = %c \n %% = %% \n s = %s\n p = %p\n x = %x \n X = %X\n",d, i, u, c, s,ptr,x,X);
    ft_printf("I am eating a %s and %s everyday\n potato is good %s vegetable %s\n %s %s %s \n %s every night \n healthy, hell see, hell sea, say Hell %s %s \n By the way, do you like baseball? Yes, I am loving it! so we go to world Baseball Lunatic",hamburger, potato, yeah, yeah, eating, eating, eating, eating, yeah, yeah);
    return 0;
}
