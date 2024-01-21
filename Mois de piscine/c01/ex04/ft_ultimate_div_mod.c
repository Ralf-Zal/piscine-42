/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 23:26:47 by rdaul             #+#    #+#             */
/*   Updated: 2023/08/15 17:49:17 by rdaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*int	main(void)
{
	int a;
	int b;
	a = 20;
	b = 8; 
	ft_ultimate_div_mod(&a,&b);
	printf("la div fait %d et %d en modulo",a,b);
}*/
