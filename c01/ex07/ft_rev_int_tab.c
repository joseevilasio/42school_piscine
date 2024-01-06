/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 20:35:42 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/23 16:03:22 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	down;
	int	up;
	int	copy[size];

	down = size - 1;
	up = 0;
	while (down > 0)
	{
		tab[down] = copy[up];
		down--;
		up++;
	}
	while (up >= size - 1)
	{
		copy[up] = tab[up];
		up++;
	}
}

int	main(void)
{
	int	size;
	int	*tab;
	int	list[6] = {10, 20, 30, 40, 50, 60};
	int	i;

	i = 0;              
	size = 6;
	tab = list;
	ft_rev_int_tab(tab, size);
	while (i <= size - 1)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
