/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:23:14 by ldevoude          #+#    #+#             */
/*   Updated: 2025/01/16 09:23:48 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

// int main (void)
// {
//     int d = 150;
//     int i = 42;
//     char c = 'c';
//     unsigned int u = -150;
//     char s[124] = "Forty-Two";
//     int *ptr = &i;
//     int x = 124;
//     int X = 124;
//     char eating[7] = "Eating";
//     char hamburger[10] = "Hamburger";
//     char potato [7] = "Potato";
//     char yeah [7] = "Yeah";
//     int len;
//     int lenorigin;
//     //char a[10] = "";
//     //unsigned int num = 20;
//     len = ft_printf("ceci est un test \n d = %d \n i = %i \n u = %u \n c = %c \n %% = %% \n s = %s\n p = %p\n x = %x \n X = %X\n",d, i, u, c, s,ptr,x,X);
//     lenorigin = printf("ceci est un test \n d = %d \n i = %i \n u = %u \n c = %c \n %% = %% \n s = %s\n p = %p\n x = %x \n X = %X\n",d, i, u, c, s,ptr,x,X);
//     ft_printf("len : %d\n", len);
//     ft_printf("lenorigin : %d\n", lenorigin);

//     ft_printf("I am eating a %s and %s everyday\n potato is good %s vegetable %s\n %s %s %s \n %s every night \n healthy, hell see, hell sea, say Hell %s %s \n By the way, do you like baseball? Yes, I am loving it! so we go to world Baseball Lunatic",hamburger, potato, yeah, yeah, eating, eating, eating, eating, yeah, yeah);

//     ft_printf("\n%d", -2147483648);
//     //ft_printf("\n%s", a);
//    // printf("\n%d", -2147483648);
//     return 0;
// }

int main(void)
{
    //int a;
    //int b;
    //int b = 0;
    //int a = 0;
    char *a;
    a = NULL;
    //a = printf("OG : %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42, -42, -42, 42, 'C', "0", 0, 0, 0 , 0, 42, 0);
    //b = ft_printf("LD : %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42, -42, -42, 42, 'C', "0", 0, 0, 0 , 0, 42, 0);
    int res = printf("%p\n", a);
    int res_ld = ft_printf("%p\n", a);
    printf("res : %d\n", res);
    printf("res_ld: %d\n", res_ld);
    return (0);
}
