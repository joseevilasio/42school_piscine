/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:43:35 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/02 14:23:39 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int		i;
	long	result;

	i = 1;
	result = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (i < power)
		result = result * ft_recursive_power(nb, power - 1);
	return (result);
}

/*int	main(void)
{
	int	nb;
	int	power;

	nb = 5;
	power = 5;
	printf("%d power (%d) = %d", nb, power, ft_recursive_power(nb, power));
	return (0);
}*/