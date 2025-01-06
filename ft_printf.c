#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int ft_printf (const char* str, ...)
{
    va_list ptr;
    va_start(ptr, str);
    int i;

    i = 0;
    while (str[i] != '\0')
    {
       /* if (str[i] == '%')
            //detection % je devrais aussi determiner la taille?
        else
        {*/
            write(1,&str[i], 1);
            i++;
        //}
    }
}

int main (void)
{
    ft_printf("ceci est un test j'adore le caca mhhh 42 oui");
    return 0;
}
