/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:06:06 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/16 15:18:01 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pt_str(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		write(1, &str[c], 1);
		c++;
	}
}

int	str_cmp(char *s1, char *s2)
{
	int	k;

	k = 0;
	while (s1[k] == s2[k] && s1[k] != '\0' && s2[k] != '\0')
	{
		k++;
	}
	return (s1[k] - s2[k]);
}

void	swap_(char **a, char **b)
{
	char	*swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_print(int i, int ac, char *av[])
{
	while (i < ac)
	{
		pt_str(av[i]);
		i++;
		write(1, "\n", 1);
	}
}

int	main(int ac, char *av[])
{
	int	i;
	int	x;

	x = 2;
	while (x < ac)
	{
		if ((str_cmp(av[x - 1], av[x]) > 0))
		{
			swap_(&av[x - 1], &av[x]);
			x = 1;
		}
		x++;
	}
	i = 1;
	ft_print(i, ac, av);
	return (0);
}
