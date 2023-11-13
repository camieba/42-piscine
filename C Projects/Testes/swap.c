/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:08:02 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/11 11:16:06 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap_ft(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
int	main(void)
{
	int	c;
	int	d;

	c = 25;
	d = 50;

	printf("%d%d\n", c, d);
	swap_ft(&c, &d);
	printf("%d%d\n", c, d);
	return (0);
}
