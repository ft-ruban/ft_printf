*This project has been created as part of the 42 curriculum by ldevoude*

# Project ft_printf

## Description
This project involves recode a 'selfmade' printf(see ```man printf```) with reduced features the main notion around the project is to learn how to handle a variable number(s) of parameter(s) in a given function thanks to STD_VARG
## Elements of the project

### ft_printf.c && ft_printf.h
Main part of the project, it take an array of char called str followed by potential parameters that represent variables the user desire to print. In a loop we check the content of the str variable and if we get into any '%' char we try to find out if we the user require to print the content of a given variable. Else print the raw letter.
end va and return how much character in total was printed (return_value)

### ft_printf_cases.c 
find out if we are dealing with a numerical value(unsigned, decimal, int), a char (char, string, or another %), a hexadecimal value, then print the content of the variable thanks to our function and rise return_value value accordingly.

### libft folder
various selfmade tools as we are not allowed to use their official version for the project.

## Instructions
### Compilation
Run:
```bash
make
```
this shall generate the libftprintf.a static library.

### Use of AI:

- `ldevoude`: almost none, the project was one of the smoothest I had during my scholarship considering I learned a lot about ptr and the concept of parameters during libft.


## Resources
- https://man7.org/linux/man-pages/man3/printf.3.html
- https://en.wikipedia.org/wiki/C_data_types
- https://www.w3schools.com/
- https://stackoverflow.com/
- https://koor.fr/C/cstdarg/va_arg.wp
