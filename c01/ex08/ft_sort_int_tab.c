/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:18:22 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/29 12:57:46 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int vetor[], int n) 
{
	int	k;
	int	j;
	int	aux;

	k = 0;
	while (k < n - 1)
	{
		j = 0;
		while (j < n - k - 1)
		{
			if (vetor[j] > vetor[j + 1])
			{
				aux = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = aux;
			}
			j++;
		}
		k++;
	}
}

int	main(void)
{
	int list[6] = {-1, 4, -4, 5, 7, 2};
	int size;
	int i;

	size = 6;
	i = 0;
	ft_sort_int_tab(list, size);
	while (i != size)
	{
		printf("%d",list[i]);
		i++;
	}
	return (0);
}
