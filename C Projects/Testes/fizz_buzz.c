/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:09:42 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/12 16:11:17 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	int	i;
	int	d;
	int	m;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i > 9)
		{
			d = i / 10 + '0';
			m = i % 10 + '0';
			write(1, &d, 1);
			write(1, &m, 1);
		}
		else
		{
			d = i + '0';
			write(1, &d, 1);
		}			
		write(1, "\n", 1);
		i++;
	}
}
