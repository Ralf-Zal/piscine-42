/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 23:14:07 by rdaul             #+#    #+#             */
/*   Updated: 2023/08/14 18:10:54 by rdaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include <stdio.h>
int	main(void)
{
	int a = 18;
	int b = 3;
	int mod = a / b;
	int div = a % b;
	ft_div_mod(a,b,&mod,&div);
	printf("%d %d",mod,div);
}*/
