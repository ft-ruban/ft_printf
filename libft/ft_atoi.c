/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:26:14 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/08 18:34:03 by ldevoude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_atoi(const char *nptr)
{
	int		i;
	long	result;
	bool	negative;

	negative = false;
	result = 0;
	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			negative = true;
		i++;
	}
	while (nptr[i] <= '9' && nptr[i] >= '0')
	{
		result += nptr[i] - 48;
		if (nptr[i + 1] <= '9' && nptr[i + 1] >= '0')
			result *= 10;
		i++;
	}
	if (negative == true)
		result *= -1;
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char	nptr[42] = "-420";

	printf("%d",ft_atoi(nptr));
}
*/