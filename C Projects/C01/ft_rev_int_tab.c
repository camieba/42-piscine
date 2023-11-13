/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:22:18 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/01 18:17:03 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	begin;
	int	ending;
	int	swap;

	begin = 0;
	ending = size -1;
	while (begin < ending)
	{
		swap = tab[begin];
		tab[begin] = tab[ending];
		tab[ending] = swap;
		begin++;
		ending--;
	}
}
/*
int	main(void)
{
	int	K[6]={4, 5, 6, 7, 8, 9};
	int	index;
	int	size;

	index = 0;
	size = 6;
	while (index < size)
	{
		printf("%d", K[index]);
		index++;	
	}
	index = 0;
	printf("\n");
	ft_rev_int_tab(K, size);
	while (index < size)
	{
		printf("%d", K[index]);
		index++;
	}
	return(0);
}*/
