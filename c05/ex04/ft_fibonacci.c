/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:00:52 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/02 14:27:15 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	i;

	i = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	if (index > 2)
	{
		i = i + ft_fibonacci(index - 1);
		i = i + ft_fibonacci(index - 2);
	}
	return (i);
}

/*int	main(void)
{
	printf("index -> %d\n", ft_fibonacci(3));
	printf("-> %d\n", ft_fibonacci(19));
	return (0);
}*/