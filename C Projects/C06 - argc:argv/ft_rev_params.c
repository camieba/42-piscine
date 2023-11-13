/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:20:22 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/14 11:00:01 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_str(char *str)
{
	int	z;

	z = 0;
	while (str[z] != '\0')
	{
		write(1, &str[z], 1);
		z++;
	}
}

int	main(int ac, char *av[])
{
	int	x;

	x = ac - 1;
	while (x > 0)
	{
		put_str(av[x]);
		x--;
		write(1, "\n", 1);
	}
	return (0);
}
