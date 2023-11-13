/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:59:32 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/06 10:57:47 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count_;

	count_ = 0;
	while (src[count_] && count_ < n) 
	{
		dest[count_] = src[count_];
		count_++;
	}
	while (count_ < n)
	{
		dest[count_] = '\0';
		count_++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	v[] = "ceu de estrelas";
	char	c[] = "estrela";
	
	printf("%s", strncpy(v, c, 7));
}*/
