/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:59:00 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/10 12:23:13 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	r;
	unsigned int	d;

	r = 0;
	d = 0;
	while (dest[r] != '\0')
	{
		r++;
	}
	while (src[d] != '\0' && d < size)
	{
		dest[r + d] = src[d];
		d++;
	}
	dest[d + r] = '\0';
	if (size < r)
		return (size + d);
	return (d + r);
}
/*
int	main(void)
{
	char	str_d[11]  = "sol";
	char	str_s[]  = "quente";
	unsigned int	l = 6;
	
	printf("tamanho: %d\n", ft_strlcat(str_d, str_s, l));
	printf("string: %s\n", str_d);
	return (0);
}*/
