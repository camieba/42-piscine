/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 19:02:49 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/01 18:32:37 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	divide;
	int	rest;

	if (*b != 0)
	{
		divide = *a / *b;
		rest = *a % *b;
		*a = divide;
		*b = rest;
	}
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 16;

	b = 9;

	ft_ultimate_div_mod(&a,&b);
	printf("resultado da divisao %d,\n resto da divisao %d", a, b);
	return (0);
}*/
