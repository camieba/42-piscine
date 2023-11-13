/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:54:53 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/07 15:05:03 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	y;
	unsigned int	dst_len;

	y = 0;
	dst_len = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	while (src[dst_len] != '\0' && dst_len < nb)
	{
		dest[y + dst_len] = src[dst_len];
		dst_len++;
	}
	dest[y + dst_len] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	des[14] = "pao";
	char	fon[] = " de queijo";

	printf(" %s\n", ft_strncat(des, fon, 11));
	return (0);
}*/
