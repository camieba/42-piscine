/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:34:26 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/09 16:48:50 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	k;

	k = 0;
	while ((s1[k] != '\0' || s2[k] != '\0') && k < n)
	{
		if (s1[k] != s2[k])
		{
			return (s1[k] - s2[k]);
		}
		k++;
	}
	return (0);
}
/*
int	main(void)
{
	char	f[8] = "celula";
	char	g[8] = "celular";

	printf("retorna %d\n", ft_strncmp(f, g, 6));
	printf("retorna %d\n", strncmp(f, g, 7));
	printf("retorna %d\n", ft_strncmp(f, g, 7));
	return (0);
}*/
