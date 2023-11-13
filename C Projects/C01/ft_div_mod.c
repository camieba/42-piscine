/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:15:46 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/01 11:09:08 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{
	int	div;
	int	mod;
	int	a;
	int 	b;

	div = 0;
	mod = 0;
	a = 50;
	b = 7;

	ft_div_mod(a, b, &div, &mod);
	printf("resultado da divisao %d \n resto da divisao %d", div, mod); 
	return(0);
}*/
