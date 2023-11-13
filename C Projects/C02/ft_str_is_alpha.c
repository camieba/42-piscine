/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:21:13 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/04 15:53:30 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_alfab(char j)
{
	return ((j >= 'a' && j <= 'z') || (j >= 'A' && j <= 'Z' ));
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_alfab (str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*k;
	
	k = "CASA";	
	printf("%d", ft_str_is_alpha(k));
	return (0);
}*/
