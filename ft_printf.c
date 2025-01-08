#include "ft_printf.h"
#include <stdio.h>
#include <stdint.h>
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
    char* string_temp;
    
    if (str[i+1] == 'c')
    {
        value = va_arg(ptr, int);
        write (1, &value, 1);
    }
    else if (str[i+1] == '%')
    {
        write (1, "%", 1);
    }
    else if (str[i+1] == 's')
    {
        string_temp = va_arg(ptr,char *);
        write (1, string_temp, ft_strlen((string_temp)));
    }
    return (2);
    //value = va_arg(ptr,char)
}
int ft_print_hex(va_list ptr, int i, const char* str)
{
    void *string_temp;
    char *test;
    //int int_temp;
    if (str[i+1] == 'p')
    {
        printf("je passe ici\n");
        string_temp = va_arg(ptr, void *);
        //printf("value String_temp = %p",string_temp);
        test = ft_itoa((unsigned long)string_temp);
        printf("test : %s\n",test);
        write (1,test,16);
    }
    /*if (str[i+1] == 'x')
    {
        int_temp = va_arg(arg, int);
        ft_itoa(int_temp, buffer, 16)
    }*/
    return (2);
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
            else 
                i += ft_print_hex(ptr, i, str);
        }
        else
        {
            write(1,&str[i], 1);
            i++;
        }
    }
    return 1;
}
