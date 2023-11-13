/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:25:14 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/09 16:49:58 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	w;
	int	s;	

	w = 0;
	s = 0;
	while (dest[s] != '\0')
	{
		s++;
	}
	while (src[w] != '\0')
	{
		dest[s + w] = src[w];
		w++;
	}
	dest[s + w] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	d[7] = "cam";
	char	f[] = "ila";

	printf("%s\n", ft_strcat(d, f));
	return (0);
}*/
