/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:48:59 by rdaul             #+#    #+#             */
/*   Updated: 2023/08/28 18:32:52 by rdaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;

	i = 0;
	while(i == power)
	{
		if(i != power)
			nb *= nb;
		i++;
	}	
}