/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:22:13 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/08 20:05:16 by ldevoude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	n;
	size_t	test;

	test = len;
	n = ft_strlen(s2);
	if (!s2)
		return ((char *)s1);
	if (n == 0)
		return ((char *)s1);
	while (*s1 && len)
	{
		if (!ft_strncmp(s1, s2, n) && len >= ft_strlen(s2))
		{
			if (ft_strlen(s2) > test)
				return (NULL);
			return ((char *)s1);
		}
		s1++;
		len--;
	}
	return (NULL);
}
/*
#include <bsd/string.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[42] = "MZIRIBMZIRIBMZE123";
	char s2[42] = "MZIRIBMZE";
	size_t len = 8;
	char* p;

	p = ft_strnstr(s1,s2,len);
//	p = strnstr(((void*)0), "fake", 3);

if (p)
	{
		printf("String found\n");
		printf("First occurrence of string '%s' in '%s' is "
				"'%s'",
				s2, s1, p);
	}
	else
		printf("String not found\n");

	return (0);
}*/
