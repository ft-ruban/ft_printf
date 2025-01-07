/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:42:27 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/08 18:38:49 by ldevoude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t element_count, size_t element_size)
{
	char	*ptr;
	size_t	i;
	size_t	total_size;

	total_size = element_count * element_size;
	i = 0;
	ptr = malloc(total_size);
	if (ptr == 0)
		return (NULL);
	while (i != total_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	int num_rats = 10;
	int *rats_list = 0;
	//int i;


	rats_list = ft_calloc(num_rats, 8);

	while (num_rats--)
		printf("[%d]", rats_list[num_rats]);
}*/
