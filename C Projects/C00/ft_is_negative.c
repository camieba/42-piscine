/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 09:39:50 by cbarros-          #+#    #+#             */
/*   Updated: 2023/07/28 11:34:02 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)

{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else 
	{
		write(1, "N", 1);
	}
}
/*
int	main()
{
	ft_is_negative(1);
	ft_is_negative(0);
	ft_is_negative(-5);
	return (0);
}
*/
