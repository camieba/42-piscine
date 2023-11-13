/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 18:37:04 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/05 17:00:52 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		if (!((str[y] >= 'a' && str[y] <= 'z')))
		{
			return (0);
		}
		y++;
	}
	return (1);
}
/*
int	main(void)
{
	printf ("hello %d\n", ft_str_is_lowercase("hello"));
	printf ("WORLD %d\n", ft_str_is_lowercase("WORLD"));
	printf ("vazio %d\n", ft_str_is_lowercase(""));
	return (0);
}*/
