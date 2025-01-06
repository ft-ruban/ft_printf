#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int ft_printf_format(va_list ptr, int i, const char* str)
{
    int return_value = 2;
    if (str[i+1] == 'd')
    {
        write(1,va_arg(ptr), sizeof(int));
        return_value = 2;
    }
    return (return_value);
}

int ft_printf (const char* str, ...)
{
    va_list ptr;
    va_start(ptr, str);
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '%')
        {
            i += ft_printf_format(ptr, i, str);
        }
        else
        {
            write(1,&str[i], 1);
            i++;
        }
    }
int main (void)
{
    ft_printf("ceci est un test j'adore le caca mhhh 42 %d oui", 150);
    return 0;
}
