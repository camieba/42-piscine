/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 19:30:30 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/05 17:02:57 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	q;

	q = 0;
	while (str[q] != '\0')
	{
		if (!((str[q] >= 'A' && str[q] <= 'Z')))
		{
			return (0);
		}
		q++;
	}
	return (1);
}
/*
int	main(void)
{
	printf ("TESTE %d\n", ft_str_is_uppercase("TESTE"));
	printf ("vazio %d\n", ft_str_is_uppercase(""));
	printf ("teste %d\n", ft_str_is_uppercase("teste"));
	return(0); 
}*/
