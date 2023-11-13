/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:10:27 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/16 16:04:44 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	printf("%d\n", ft_recursive_power(9, 4));
	printf("ZERO:%d\n", ft_recursive_power(0, 0));
	printf("UM:%d\n", ft_recursive_power(5, 1));
	printf("NEG:%d\n", ft_recursive_power(5, -2));
	return (0);
}*/
