/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:48:46 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/15 18:08:40 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
/*
int	main()
{
	printf("negativo:%d\n", ft_iterative_power(15, -2));
	printf("negativo:%d\n", ft_iterative_power(-15, 2));
	printf("zero:%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(10, 2));
	printf("%d\n", ft_iterative_power(15, 3));
	return (0);
}*/
