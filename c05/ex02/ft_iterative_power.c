/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:56:45 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/02 14:20:39 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int		i;
	long	result;

	i = 1;
	result = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > i)
	{
		result = result * nb;
		i++;
	}
	return (result);
}

/*int	main(void)
{
	printf(" power () = %d",ft_iterative_power(4, 2));
	return (0);
}*/