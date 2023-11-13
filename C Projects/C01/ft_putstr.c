/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 09:55:34 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/01 13:18:40 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	conta;

	conta = 0;
	while (str[conta] != '\0') 
	{
		write(1, &str[conta], 1);
		conta++;
	}
}
/*
int	main(void)
{
	char	*mystr;

	mystr = "Escreve isso aqui";
	ft_putstr(mystr);
	return(0); 
}*/
