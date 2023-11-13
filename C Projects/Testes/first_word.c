/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:31:08 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/11 13:27:30 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	first_word(int argc, char *argv[])
{
	int	k;
	
	k = 0;
	if (argc == 2)
	{
		while (argv[1][k] != '\0' && (argv[1][k] == ' ' || argv[1][k] == '\t'))
			k++;
		while (argv[1][k] != '\0' && argv[1][k] != ' ' && argv[1][k] != '\t')
		{
			write(1, &argv[1][k], 1);
			k++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
int	main(int i, char *str[])
{
	first_word(i, str);
	return (0);
}
