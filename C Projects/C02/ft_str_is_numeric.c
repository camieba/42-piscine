/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:07:22 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/06 10:58:12 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	m;

	m = 0;
	while (str[m] != '\0')
	{
		if (!((str[m] >= '0' && str[m] <= '9')))
		{
			return (0);
		}
		m++;
	}
	return (1);
}
/*
int	main(void)
{
	char	g[] = "8620";

	printf("%d", ft_str_is_numeric(g));
	return (0);
}*/
