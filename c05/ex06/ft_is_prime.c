/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:35:06 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/02 14:33:42 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d  -> %d\n", 0, ft_is_prime(0));
	printf("%d  -> %d\n", -1, ft_is_prime(-1));
	printf("%d  -> %d\n", 2, ft_is_prime(2));
	printf("%d  -> %d\n", 7, ft_is_prime(7));
	return (0);
}*/