#include "ft_printf.h"
/*
int ft_printf_format(va_list ptr, int i, const char* str)
{
    int value;
    int return_value = 2;
    if (str[i+1] == 'd')
    {
        value = va_arg(ptr,int);
        write(1,&value, sizeof(int));
        return_value = 2;
    }
    return (return_value);
}
*/
int ft_printf (const char *str, ...)
{
    va_list ptr;
    va_start(ptr, str);
    int i;
    int value;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '%')
        {
            value = va_arg(ptr,int);
            write(1,&value, sizeof(int));
            i += 2;
            //i += ft_printf_format(ptr, i, str);
        }
        else
        {
            write(1,&str[i], 1);
            i++;
        }
    }
    return 1;
}
/*
int main (void)
{
    int test = 150;
    ft_printf("ceci est un test j'adore le caca mhhh 42 %d oui", test);
    return 0;
}*/
