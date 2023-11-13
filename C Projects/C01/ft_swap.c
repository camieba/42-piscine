/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:17:45 by cbarros-          #+#    #+#             */
/*   Updated: 2023/07/31 15:50:17 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*int	main(void)
{
	int	C;
	
	C = 50;

	int	B;

	B = 30;

	printf("%d", C);
	printf("%d", B);
	ft_swap(&C, &B);
	printf("%d", C);
	printf("%d", B);
	return(0);
}*/
