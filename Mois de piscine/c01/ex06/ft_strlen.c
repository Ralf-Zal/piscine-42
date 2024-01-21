/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:08:27 by rdaul             #+#    #+#             */
/*   Updated: 2023/08/15 18:40:48 by rdaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0 ;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	source[] = "djhfgkasjhdg";
	int	n;

	n = ft_strlen(source);
	printf("%d\n", n);
	n = strlen(source);
	printf("%d\n", n);
}*/
