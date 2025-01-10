#include "ft_printf.h"
#include <stdio.h>
#include <stdint.h>
int ft_printf_num(va_list ptr, int i, const char* str, int *ptr_return_value)
{
    int value; //is it supposed to be a long?
    unsigned int uvalue;
    int len;
    char *str_value;

    value = va_arg(ptr,int);
    if (str[i+1] == 'u')
    {
        uvalue = (unsigned int) value;
        str_value = ft_utoa (uvalue);
        len = ft_strlen(str_value);
        write (1, str_value, len);
    }
    else if (str[i+1] == 'd' || str[i+1] == 'i') //a fix
    {
        str_value = ft_itoa(value);
        len = ft_strlen(str_value);
        write (1, str_value, len);
    }
    *ptr_return_value += len;
    free(str_value);
    return (2);
}

int ft_printf_char(va_list ptr, int i, const char* str, int *ptr_return_value)
{
    char value;
    char* string_temp;
    int  len;
   
    len = 1;
    if (str[i+1] == 'c')
    {
        value = va_arg(ptr, int);
        write (1, &value, len);
    }
    else if (str[i+1] == '%')
        write (1, "%", len);
    else if (str[i+1] == 's')
    {
        string_temp = va_arg(ptr,char *);
        if (!string_temp)
            string_temp = "(null)";
        len = ft_strlen(string_temp);
        write (1, string_temp, len);
    }
    *ptr_return_value += len;
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

int ft_print_hex(va_list ptr, int i, const char* str /*int *ptr_return_value*/)
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
    int i;
    int return_value;
    int* ptr_return_value;

    va_start (ptr, str);
    return_value = 0;
    ptr_return_value = &return_value;
    i = 0;
    while (str[i] != '\0')
    {
            if  (str[i] == '%' && (str[i+1] == 'u' || str[i+1] == 'd' || str[i+1] == 'i'))
                i += ft_printf_num(ptr, i, str, ptr_return_value);
            else if (str[i] == '%' && (str[i+1] == 'c' || str[i+1] == 's' || str[i+1] == '%'))
                i += ft_printf_char(ptr, i, str, ptr_return_value);
            else if (str[i] == '%' && (str[i+1] == 'x' || str[i+1] == 'X' || str[i+1] == 'p'))
                i += ft_print_hex(ptr, i, str/*, ptr_return_value*/);
            else
            {
                write(1,&str[i++], 1);
                return_value += 1;
            }
    }
    return (return_value);
}
