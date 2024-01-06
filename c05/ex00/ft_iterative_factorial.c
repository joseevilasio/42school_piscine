/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:33:15 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/02 14:14:28 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	x;

	i = 1;
	x = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	while (x != i)
	{
		nb = nb * (x - i);
		i++;
	}
	return (nb);
}

/*int	main(void)
{
	int	nb;

	nb = -1;
	printf("Factorial %d! = %d", nb, ft_iterative_factorial(nb));
	return (0);
}*/