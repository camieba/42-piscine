/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarros- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:07:14 by cbarros-          #+#    #+#             */
/*   Updated: 2023/08/10 15:03:28 by cbarros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	s;
	int	p;

	s = 0;
	if (*to_find == '\0')
		return (str);
	while (str[s] != '\0')
	{
		p = 0;
		while (str[s + p] == to_find[p] && str[s + p] != '\0')
		{
			if (to_find[p + 1] == '\0')
			{
				return (&str[s]);
			}
			p++;
		}
		s++;
	}
	return (0);
}
/*
int	main(void)
{
	char	hay[] = "you can do this";
	char	nee[] = "can";
	char	*res = ft_strstr(hay, nee);

	if (res == NULL)
	{
		printf("error\n");
	}
	else
	{
		printf("%s\n", res);
	}
	return (0);
}*/
