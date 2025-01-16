/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hexx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:47:42 by ldevoude          #+#    #+#             */
/*   Updated: 2025/01/13 16:18:58 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

unsigned long calculate_length(unsigned long nbr)
{
	unsigned int  length;

	length = 0;
	while (nbr > 0)
	{
		nbr /= 16;
		length++;
	}
	return (length);
}

char    *ft_itoa_hexx(unsigned long nbr)
{
	//printf("aaaa%lu\n", nbr);
    char* result;
    unsigned long   length;
    unsigned long remainder;
	//printf("twtwt");
	if (nbr == 0)
	{	
		result = ft_calloc(2, sizeof(char));
		if (!result)
			return (0);
		result [0] = '0';
		return (result);
	}
    length = calculate_length(nbr);
	//printf("nbr : %lu", nbr);
	result = ft_calloc((length + 1), sizeof(char));
    if (!result)
        return (0);
    while(length-- != 0)
    {
        remainder = nbr % 16;
        if (remainder < 10)
            result[length] = remainder + '0';
        else
            result[length] = remainder - 10 + 'a';
        nbr /= 16;
    }
    return (result);
}

