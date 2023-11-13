/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:33:29 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/15 16:47:39 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb > 0)
	{
		res = res * nb * ft_recursive_factorial(nb - 1);
		return (res);
	}
	return (res);
}
/*
int	main()
{
	printf("zero:%d \n", ft_recursive_factorial(0));
	printf("neg:%d \n", ft_recursive_factorial(-8));
	printf("%d \n", ft_recursive_factorial(4));
	
	return (0);
}*/
