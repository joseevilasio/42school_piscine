/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:29:08 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/02 21:06:44 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	num;
	int	i;
	int	*range;

	num = min;
	i = 0;
	if (min >= max)
		return (NULL);
	range = (int *) malloc(((max - min)) * sizeof(int));
	while (num < max)
	{
		range[i] = num;
		num++;
		i++;
	}
	return (range);
}

/*int	main(void)
{
	int	i;
	int	*range;
	int	size;

	i = 0;
	size = 800;
	range = (int *) malloc((size) * sizeof(int));
	range = ft_range(1, size);
	while (i < size - 1)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}*/