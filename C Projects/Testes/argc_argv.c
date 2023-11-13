/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argc_argv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:24:28 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/13 10:44:02 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (i < argc)
	{
		printf("%d posicao:%s\n", i, argv[i]);
		i++;
	}
	return (0);
}
/*
{
 	printf("argv[0]=%s\n", argv[0]);                                             
	printf("argv[2]=%s\n", argv[2]);                                             
	printf("argv[1]=%s\n", argv[1]);
}*/
