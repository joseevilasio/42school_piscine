/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:29:18 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/04 09:33:23 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	num;
	int	i;

	i = 0;
	num = min;
	*range = (int *) malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (0);
	else if (min >= max)
	{
		*range = 0;
		return (0);		
	}
	else
	{
		while (num < max)
		{
			(*range)[i] = num;
			num++;
			i++;
		}
		return (i);
	}
	return (-1);
}

/*int	main(void)
{
	int	min;
	int	*range;
	int	max;
	int i;
	int result;

	i = 0;
	min = 0;
	max = 0;
	result = ft_ultimate_range(&range, min, max);
	if (result == -1 || result == 0)
	{
		printf("Error!");
		return (0);
	}
	while (min < max)
	{
		printf("%d\n", range[i]);
		min++;
		i++;
	}
	free(range);
	return (0);
}*/