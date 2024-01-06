/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:34:11 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/02 14:35:07 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	count;

	if (nb == 0)
		return (1);
	if (nb == 1)
		return (2);
	count = 0;
	i = nb;
	while (i > 0)
	{
		if (nb % i == 0)
			++count;
		--i;
	}
	if (count == 2)
		return (nb);
	++nb;
	return (ft_find_next_prime(nb));
}

/*int main(void)
{
	printf("\n%d",ft_find_next_prime(1));
	printf("\n%d",ft_find_next_prime(7));
	printf("\n%d",ft_find_next_prime(19));
	return (0);
}*/