/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:35:35 by cbarros-          #+#    #+#             */
/*   Updated: 2023/07/29 12:56:09 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)

{
	char	i;

	i = '0';
	while (i <= '9')
	{
		write (1, &i, 1);
		i++; 
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
