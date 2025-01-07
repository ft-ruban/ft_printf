/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:51:39 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/08 20:28:41 by ldevoude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *string, int searched_char)
{
	int	i;

	i = 0;
	while (*string != '\0')
	{
		i++;
		string++;
	}
	while (i >= 0)
	{
		if (*string == (char)searched_char)
			return ((char *)string);
		string--;
		i--;
	}
	return (0);
}

/*
//#include <stdio.h>
//#include <string.h>
int	main(void)
{
	const char s[42] = "forty-two";
	int c = 't';
	//int i = 0;

	printf("%s\n",ft_strrchr(s,c));
}*/
