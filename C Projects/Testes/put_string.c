/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_string.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:34:00 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/11 10:47:57 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_string(char	*str)
{
	int	s;
	
	s = 0;
	while (str[s] != '\0')
	{
		write (1, &str[s],1);
		s++;
	}
}
/*
int	main(void)
{
	char	str1[] = "escrever na tela";
	put_string(str1);
	return (0);
}*/
