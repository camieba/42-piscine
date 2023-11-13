/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:13:41 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/01 13:16:48 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	valor;

	valor = 0;
	while (str[valor])
	{
		valor++;
	}
	return (valor);
}
/*
int	main()
{
	char	*string;

	string = "aqui vc poe a frase q sera contabilizada";
	printf("%d", ft_strlen(string));
}*/
