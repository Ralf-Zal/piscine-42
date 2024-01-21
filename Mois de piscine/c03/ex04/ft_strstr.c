/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:26:17 by rdaul             #+#    #+#             */
/*   Updated: 2023/08/26 22:17:19 by rdaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return ((void *) 0);
}
/*#include <stdio.h>
#include <string.h>
int	main(int c, char **v)
{
	(void)c;
	printf("%s\n", ft_strstr(v[1], v[2]));
	printf("%s", strstr(v[1], v[2]));
	return (0);
}*/
