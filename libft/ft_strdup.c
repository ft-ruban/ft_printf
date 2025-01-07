/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:48:44 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/08 19:22:53 by ldevoude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	char	*result;
	size_t	len;

	len = ft_strlen(source) + 1;
	result = malloc(len * sizeof(char));
	if (!result)
		return (0);
	ft_memcpy(result, source, len);
	return (result);
}
/*
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
	const char *original = "The original string.";
	char *copy = ft_strdup(original);

	char *ptr = copy;
	while (*ptr != '\0')
	{
		*ptr = toupper(*ptr);
		ptr++;
	}

	printf("%s\n", copy);

	free(copy);

	return (0);
}*/
