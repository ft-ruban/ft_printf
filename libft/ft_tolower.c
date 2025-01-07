/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:00:40 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/08 20:22:02 by ldevoude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c < 'A' || c > 'Z')
		return (c);
	else
		return (c + 32);
}

/*
//#include <stdio.h>
//#include <ctype.h>
int	main(void)
{
	int	c;

	c = 58;
	printf("%c", c);
	printf("%c",ft_tolower(c));
	return (0);
}
*/