/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:21:50 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/02 14:31:29 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	result;

	i = 2;
	result = nb;
	if (result <= 0)
		return (0);
	if (result == 1)
		return (1);
	if (result >= 2)
	{
		while (i * i <= result)
		{
			if (i * i == result)
				return (i);
			i++;
		}
	}
	return (0);
}

/*int	main(void)
{
	printf("sqrt of 12: %d\n", ft_sqrt(12));
	printf("sqrt of 25: %d\n", ft_sqrt(25));
	printf("sqrt of 30: %d\n", ft_sqrt(30));
	printf("sqrt of 625: %d\n", ft_sqrt(625));
	printf("sqrt of 0: %d\n", ft_sqrt(0));
	printf("sqrt of -2: %d\n", ft_sqrt(-2));
	return (0);
}*/