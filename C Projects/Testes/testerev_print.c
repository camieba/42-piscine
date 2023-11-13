/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testerev_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:29:40 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/03 13:41:34 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	k;
	k = 0;
	while (str[k] != '\0')
		k++;
	return (k);
}
char	*ft_rev_print(char *str)
{
	int	k;
	
	k = ft_strlen(str);
	k--;
	while (k >= 0)
	{
		write(1, &str[k], 1);
		k--;
	}
	return (str);
}

int	main ()
{
	char	string[] = "camila";
	ft_rev_print(string);
}
