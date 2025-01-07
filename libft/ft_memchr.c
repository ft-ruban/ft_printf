/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:21:48 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/08 19:06:49 by ldevoude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	unsigned char	*p;
	unsigned char	c;

	p = (unsigned char *)ptr;
	c = (unsigned char)ch;
	while (count--)
	{
		if (*p == c)
			return ((void *)p);
		p++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	const char str[] = "ABCDEFG";
	const int chars[] = {'D', 'd'};
	for (size_t i = 0; i < sizeof chars / (sizeof chars[0]); ++i)
	{
		const int c = chars[i];
		const char *ps = ft_memchr(str, c, strlen(str));
		ps ? printf ("character '%c'(%i) found: %s\n", c, c, ps)
			: printf ("character '%c'(%i) not found\n", c, c);
	}
	return (0);
}*/
