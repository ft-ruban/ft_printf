/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 08:59:11 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/08 19:19:16 by ldevoude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	length;

	length = ft_strlen(s);
	write (fd, s, length);
}
/*
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
int main(void)
{
    int handle = open("test.txt", O_WRONLY);
    char s[64] = "forty-two";
    ft_putstr_fd(s, handle);
    printf("Success!");
	return (0);
}
*/
