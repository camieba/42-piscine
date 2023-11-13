/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:50:49 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/05 13:34:22 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		if (!(str[l] >= 'A' && str[l] <= 'Z')) 
			l++;
		else 
			str[l] = str[l] + 32;
	}
	return (str);
}
/*
int	main(void)
{
	char	try[] = "SOCORRO";
	printf("SOCORRO\n%s", ft_strlowcase(try));
	return (0);
}*/
