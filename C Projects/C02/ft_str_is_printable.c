/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 19:58:21 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/05 16:47:33 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	s;

	s = 0;
	while (str[s] != '\0')
	{
		if (!((str[s] >= 32 && str[s] <= 126)))
		{
			return (0);
		}
		s++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("anotHeR %d\n", ft_str_is_printable("anotHeR"));
	printf("vazio %d\n", ft_str_is_printable(""));
	printf("\t %d\n", ft_str_is_printable("\t"));
	return(0);
}*/
