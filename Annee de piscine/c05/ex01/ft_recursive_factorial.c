/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:20:51 by rdaul             #+#    #+#             */
/*   Updated: 2023/08/31 17:36:31 by rdaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int i;

	i = nb;
	if(i > 0)
	{
		i--;
		nb *= i;
		ft_recursive_factorial(nb);
	}
	else
	{
		return(nb);
	}
}


int main(int argc, char **argv)
{
	(void)argc;
	int i;
	i = 0;
	printf("%d",ft_recursive_factorial(atoi(argv[5])));
}
