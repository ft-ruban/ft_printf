#include "ft_printf.h"
#include <stdio.h>
int ft_printf_format(va_list ptr, int i, const char* str)
{
    long value;
    int return_value;
    unsigned int uvalue;

    value = va_arg(ptr,int);
    //uvalue = (unsigned int)value;
    //printf("%u",uvalue);
    if (str[i+1] == 'u')
    {
        uvalue = (unsigned int) value;
        value = uvalue;
        write(1,ft_utoa (uvalue), ft_strlen(ft_utoa(uvalue)));
    }
    if (str[i+1] == 'd' || str[i+1] == 'i') //a fix
    {
        //value = va_arg(ptr,int);
        write(1,ft_itoa(value), ft_strlen(ft_itoa(value)));
        return_value = 2;
    }

    return (return_value);
}
int ft_printf (const char *str, ...)
{
    va_list ptr;
    va_start(ptr, str);
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '%')
            i += ft_printf_format(ptr, i, str);
        else
        {
            write(1,&str[i], 1);
            i++;
        }
    }
    return 1;
}
