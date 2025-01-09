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
}
char*    ft_itoa_hex(unsigned long nbr, int is_up)
{
    char* result;
    unsigned long   length;
    unsigned long   buff;
    char* hex_table;
    
    if (is_up == 0)
        hex_table = ft_strdup("0123456789abcdef");
    else 
        hex_table = ft_strdup("0123456789ABCDEF");
    length = 0;
    buff = nbr;
    while(buff > 0) 
    {
    buff /= 16;
    length++;
    }
    result = ft_calloc((length + 1), sizeof(char));
    if (!result)
        return (0);
    while(length-- != 0)
    {
        result[length] = hex_table[nbr % 16];
        nbr /= 16;
    }
    return (result);
}

int ft_print_hex(va_list ptr, int i, const char* str)
{
    void *string_temp;
    char *test;
    unsigned long param;
    int int_temp;

    if (str[i+1] == 'p')
    {
        string_temp = va_arg(ptr, void *);
        param = (unsigned long) string_temp;
        test = ft_itoa_hex(param, 0);
        write (1, "0x", 2);
        write (1, test, ft_strlen(test));
    }
    else
    {
    int_temp = va_arg(ptr, int);
    if (str[i+1] == 'x')
        test = ft_itoa_hex(int_temp, 0);
    else 
        test = ft_itoa_hex(int_temp, 1);
    write (1, test, ft_strlen(test)); 
    }
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
