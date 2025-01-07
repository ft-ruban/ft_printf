#include "ft_printf.h"
#include <stdio.h>
int ft_printf_num(va_list ptr, int i, const char* str)
{
    int value; //is it supposed to be a long?
    int return_value;
    unsigned int uvalue;

    value = va_arg(ptr,int);
    if (str[i+1] == 'u')
    {
        uvalue = (unsigned int) value;
        write(1,ft_utoa (uvalue), ft_strlen(ft_utoa(uvalue)));
    }
    if (str[i+1] == 'd' || str[i+1] == 'i') //a fix
    {
        write(1,ft_itoa(value), ft_strlen(ft_itoa(value)));
        return_value = 2;
    }

    return (return_value);
}

int ft_printf_char(va_list ptr, int i, const char* str)
{
    char value;
    
    if (str[i+1] == 'c')
    {
        value = va_arg(ptr,int);
        write (1, &value, 1);
    }
    else if (str[i+1] == '%')
    {
        write (1, "%", 1);
    }
    return (2);
    //value = va_arg(ptr,char)
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
        {
            if (str[i+1] == 'u' || str[i+1] == 'd' || str[i+1] == 'i')
                i += ft_printf_num(ptr, i, str);
            else if (str[i+1] == 'c' || str[i+1] == 's' || str[i+1] == '%')
                i += ft_printf_char(ptr, i, str);
        }
        else
        {
            write(1,&str[i], 1);
            i++;
        }
    }
    return 1;
}
