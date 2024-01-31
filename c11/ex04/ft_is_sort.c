/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 21:43:36 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/31 14:03:40 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_level(int a, int b)
{
	if (a < b)
		return (-1);
	else if (a == b)
		return (0);
	else
		return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	r;

	i = 0;
	while (i < length)
	{
		r = f(tab[i], tab[i + 1]);
		if (r > 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	int	tab_1[6] = {0, 1, 2, 3, 4, 5};
	int	tab_2[6] = {0, 1, 4, 5, 3, 2};
	int	tab_3[6] = {1, 0, 2, 3, 4, 5};
	int	length;

	length = 6;
	printf("Result 1 - ft return %d\n", ft_is_sort(tab_1, length, &ft_level));
	printf("Result 0 - ft return %d\n", ft_is_sort(tab_2, length, &ft_level));
	printf("Result 0 - ft return %d\n", ft_is_sort(tab_3, length, &ft_level));
	return (0);
}
