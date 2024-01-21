/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 23:13:52 by rdaul             #+#    #+#             */
/*   Updated: 2023/08/15 23:28:20 by rdaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_rev_int_tab(int *tab, int size)
{
	int i = 0;
	while (i < size)
	{
		tab[i] = tab[size - 1 - i];
		i++;
	}
}


#include <stdio.h>
int main()
{
	int tab[6] = {4,5,7,8,6};


	for (int i = 0; i < 6; i++){
		printf("%d ", tab[i]);
	}

	printf("\n");

	ft_rev_int_tab(tab, 6);

	for (int i = 0; i < 6; i++){
                printf("%d ", tab[i]);
        }
}
