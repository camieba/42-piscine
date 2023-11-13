/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 09:24:09 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/07 10:35:10 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	a[5] = "casa";
	char	b[5] = "case";
	char	c[5] = "casa";		

	printf("retorno = %d\n", strcmp(a, b));
	printf("retorno = %d\n", ft_strcmp(a, b));
	printf("retorno = %d\n", ft_strcmp(b, c));
	printf("retorno = %d\n", ft_strcmp(a, c));
	return (0);
}*/
