/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 10:23:07 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/05 12:37:06 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		if (!(str[y] >= 'a' && str[y] <= 'z'))
			y++;
		else 
		{
			str[y] = str[y] - 32;
		}
	}
	return (str);
}
/*
int	main(void)
{
	char teste[] = "loucura";

	printf ("loucura\n%s", ft_strupcase(teste));
	return (0);
}*/
